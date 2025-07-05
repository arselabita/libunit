#include "libunit.h"

int launch_tests(t_unit_test **tests)
{
	t_unit_test *current;
	int result;
	int pid;
	int count;
	int success;
	int status;

	count = 0;
	status = 0;
	success = 0;

	if (!tests || !*tests)
		return (0);

	current = *tests;
	while (current)
	{
		count++;
		pid = fork();
		if (pid < 0)
		{
			write(2, "Fork failed\n", 12);
			return (-1);
		}
		else if (pid == 0)
		{
			// write(1, "Running test: ", 15);
			// write(1, current->name, ft_strlen(current->name));
			// write(1, "\n", 1);
			result = current->function();
			if (result == 0)
			{
				write(1, current->name, ft_strlen(current->name));
				write(1, ": [OK]\n", 7);
				return 111;
			}
			else
			{
				write(1, current->name, ft_strlen(current->name));
				write(1, ": [KO]\n", 7);
				return -1;
			}
			// exit(1);
		}
		else
		{
			wait(&status);
			// if(WIFEXITED(status))
			// 	ft_printf("Success\n");
			if(WIFSIGNALED(status))
			{
				if(status == 139)
					ft_printf("%s: [SIGSEGV]\n", current->name);
				else if(status == 138)
					ft_printf("%s: [SIGBUS]\n", current->name);
				else
					ft_printf("%s: [%d]\n", current->name);
			}
			else
			{
				// ft_printf("My status: %d\n", status);
				success++;
			}
			// if(WTERMSIG(status))
			// {
			// 	ft_printf("Status: %d\n", status);
			// 	ft_printf("BUSSS\n");
			// }

		}
		current = current->next;
	}
	ft_printf("Number of tests: %d/%d\n", success, count);
	return (0);
}