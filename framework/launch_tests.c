#include "libunit.h"

static char *generate_log_filename(const char *fun_name)
{
	time_t now = time(NULL);
	struct tm *t = localtime(&now);
	char timestamp[32];
	char *path = "./logs/";

	// Format: DD-MM-YYYY_HH-MM-SS
	strftime(timestamp, sizeof(timestamp), "%d-%m-%Y_%H-%M-%S", t);

	// Allocate space for full filename
	size_t len = strlen(path) + strlen(fun_name) + strlen(timestamp) + 6; // +1 for '_' +4 for ".log" +1 for '\0'
	char *filename = malloc(len);
	if (!filename)
		return NULL;

	snprintf(filename, len, "%s%s_%s.log", path, fun_name, timestamp);
	return filename;
}

int launch_tests(t_unit_test **tests)
{
	t_unit_test *current;
	int pid;
	int count;
	int success;
	int status;
	int code;
	char *fun_name;
	
	count = 0;
	status = 0;
	success = 0;
	code = 0;
	pid = -1;
	
	if (!tests || !*tests)
	return (0);
	current = *tests;
	fun_name = current->fun_name;
	char *log_file = generate_log_filename(current->fun_name);
	if (!log_file)
	{
		write(2, "Failed to create log file\n", 26);
		free_tests(tests);
		exit(EXIT_FAILURE);
	}
	int log_fd = open(log_file, O_WRONLY | O_CREAT | O_APPEND, 0644);
	if (log_fd < 0)
	{
		write(2, "Failed to open log file\n", 24);
		free(log_file);
		free_tests(tests);
		exit(EXIT_FAILURE);
	}
	free(log_file);
	while (current)
	{
		count++;
		pid = fork();
		if (pid < 0)
		{
			write(2, "Fork failed\n", 12);
			free_tests(tests);
			close(log_fd);
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			alarm(5);
			sleep(1);
			int result = current->function();
			if (result == TEST_SUCCESS)
				exit(EXIT_SUCCESS);
			else if (result == TEST_FAILURE)
				exit(EXIT_FAILURE);
			else
				exit(255); // Exit with a custom code for unknown results
		}
		else
		{
			wait(&status);
			if(WIFSIGNALED(status))
			{
				int sig = WTERMSIG(status);
				ft_printf("%s: %s : " RED "[%s]" RESET "\n", current->fun_name, current->test_name, strsignal(sig));
				dprintf(log_fd, "%s: %s : [%s]\n", current->fun_name, current->test_name, strsignal(sig));
			}
			else if (WIFEXITED(status))
			{
				if (WEXITSTATUS(status) == EXIT_SUCCESS)
				{
					printf("%s: %s : " GREEN "[OK]" RESET "\n", current->fun_name, current->test_name);
					dprintf(log_fd, "%s: %s : [OK]\n", current->fun_name, current->test_name);
					success++;
				}
				else if (WEXITSTATUS(status) == EXIT_FAILURE)
				{
					ft_printf("%s: %s : " RED "[KO]" RESET "\n", current->fun_name, current->test_name);
					dprintf(log_fd, "%s: %s : [KO]\n", current->fun_name, current->test_name);
				}
				else
				{
					ft_printf("%s: %s : " RED "[UNKNOWN EXIT CODE]" RESET "\n", current->fun_name, current->test_name);
					dprintf(log_fd, "%s: %s : [UNKNOWN EXIT CODE]\n", current->fun_name, current->test_name);
				}
			}
			else
			{
				ft_printf("%s: %s : \033[31m[UNKNOWN]\033[0m\n", current->fun_name, current->test_name);
				dprintf(log_fd, "%s: %s : [UNKNOWN]\n", current->fun_name, current->test_name);
			}
		}
		current = current->next;
	}
	if (count == success)
	{
		ft_printf(GREEN "%d/%d" RESET " tests checked for %s\n", success, count, fun_name);
		dprintf(log_fd, "%s: %d/%d tests passed\n", fun_name, success, count);
		code = 0;
	}
	else
	{
		ft_printf(YELLOW "%d/%d" RESET " tests checked for %s\n", success, count, fun_name);
		dprintf(log_fd, "%s: %d/%d tests passed\n", fun_name, success, count);
		code = -1;
	}
	close(log_fd);
	return (code);
}