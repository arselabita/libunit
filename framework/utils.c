#include "libunit.h"

void	ft_clean(t_unit_test **tests, int log_fd, char *name)
{
	printf("%s failed\n", name);
	free_tests(tests);
	close(log_fd);
	exit(EXIT_FAILURE);
}

// +1 for '_' +4 for ".log" +1 for '\0'
char	*generate_log_filename(const char *fun_name, t_unit_test **tests)
{
	time_t		now;
	struct tm	*t;
	char		timestamp[32];
	size_t		len;
	char		*filename;

	now = time(NULL);
	t = localtime(&now);
	strftime(timestamp, sizeof(timestamp), "%d-%m-%Y_%H-%M-%S", t);
	len = strlen("./logs/") + strlen(fun_name) + strlen(timestamp) + 6;
	filename = malloc(len);
	if (!filename)
	{
		write(2, "Failed to create log file\n", 26);
		free_tests(tests);
		exit(EXIT_FAILURE);
	}
	snprintf(filename, len, "%s%s_%s.log", "./logs/", fun_name, timestamp);
	return (filename);
}

int	open_log_file(char *fun_name, t_unit_test **tests)
{
	char	*log_file;
	int		fd;

	log_file = generate_log_filename(fun_name, tests);
	fd = open(log_file, O_WRONLY | O_CREAT | O_APPEND, 0644);
	free(log_file);
	if (fd < 0)
		ft_clean(tests, fd, "Open");
	return (fd);
}

int	ft_print_results(int count, int success, char *fun_name, int log_fd)
{
	int	code;

	code = 0;
	if (count == success)
	{
		ft_printf(GREEN "%d/%d" RESET " tests checked for %s\n",
			success, count, fun_name);
		dprintf(log_fd, "%s: %d/%d tests passed\n",
			fun_name, success, count);
		code = 0;
	}
	else
	{
		ft_printf(YELLOW "%d/%d" RESET " tests checked for %s\n",
			success, count, fun_name);
		dprintf(log_fd, "%s: %d/%d tests passed\n", fun_name, success, count);
		code = -1;
	}
	return (code);
}

void	ft_print_single_result(t_unit_test *test, int log_fd, int i)
{
	if (i == TEST_SUCCESS)
	{
		ft_printf("%s: %s : " GREEN "[OK]" RESET "\n",
			test->fun_name, test->test_name);
		dprintf(log_fd, "%s: %s : [OK]\n",
			test->fun_name, test->test_name);
	}
	else if (i == TEST_FAILURE)
	{
		ft_printf("%s: %s : " RED "[KO]" RESET "\n",
			test->fun_name, test->test_name);
		dprintf(log_fd, "%s: %s : [KO]\n",
			test->fun_name, test->test_name);
	}
	else
	{
		ft_printf("%s: %s : " RED "[UNKNOWN]" RESET "\n",
			test->fun_name, test->test_name);
		dprintf(log_fd, "%s: %s : [UNKNOWN]\n",
			test->fun_name, test->test_name);
	}
}
