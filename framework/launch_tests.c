#include "libunit.h"

static void	run_test_child_process(t_unit_test *test)
{
	int	result;

	alarm(5);
	sleep(1);
	result = test->function();
	if (result == TEST_SUCCESS)
		exit(EXIT_SUCCESS);
	else if (result == TEST_FAILURE)
		exit(EXIT_FAILURE);
	else
		exit(EXIT_FAILURE);
}

static void	ft_success_child_process(int status, t_unit_test *test,
		int *success, int log_fd)
{
	int	exit_code;
	exit_code = WEXITSTATUS(status);
	if (exit_code == EXIT_SUCCESS)
	{
		ft_print_single_result(test, log_fd, TEST_SUCCESS);
		(*success)++;
	}
	else if (exit_code == EXIT_FAILURE)
		ft_print_single_result(test, log_fd, TEST_FAILURE);
	else
		ft_print_single_result(test, log_fd, TEST_UNKNOWN);
}

static void	handle_test_result(t_unit_test *test, int status,
		int *success, int log_fd)
{
	int	sig;

	if (WIFSIGNALED(status))
	{
		sig = WTERMSIG(status);
		ft_printf("%s: %s : " RED "[%s]" RESET "\n",
			test->fun_name, test->test_name, strsignal(sig));
		dprintf(log_fd, "%s: %s : [%s]\n",
			test->fun_name, test->test_name, strsignal(sig));
	}
	else if (WIFEXITED(status))
		ft_success_child_process(status, test, success, log_fd);
	else
		ft_print_single_result(test, log_fd, TEST_UNKNOWN);
}

static void	ft_fork(t_unit_test **tests, t_unit_test *current,
		int log_fd, int *success)
{
	pid_t	pid;
	int		status;

	pid = fork();
	status = 0;
	if (pid < 0)
	{
		ft_clean(tests, -1, "Fork");
	}
	else if (pid == 0)
		run_test_child_process(current);
	else
	{
		wait(&status);
		handle_test_result(current, status, success, log_fd);
	}
}

int	launch_tests(t_unit_test **tests)
{
	t_unit_test	*current;
	int			count;
	int			success;
	int			code;
	int			log_fd;

	count = 0;
	success = 0;
	code = 0;
	log_fd = -1;
	if (!tests || !*tests)
		return (0);
	current = *tests;
	log_fd = open_log_file(current->fun_name, tests);
	while (current)
	{
		count++;
		ft_fork(tests, current, log_fd, &success);
		current = current->next;
	}
	code = ft_print_results(count, success, (*tests)->fun_name, log_fd);
	close(log_fd);
	return (code);
}
