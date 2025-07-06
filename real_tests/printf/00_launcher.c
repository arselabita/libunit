#include "printf.h"

int printf_launcher(void)
{
	int exit_code;

	exit_code = 0;
	t_unit_test *printf_testlist;
	ft_bzero(&printf_testlist, sizeof(t_unit_test *));
	load_tests(&printf_testlist, "PRINTF", "Printf Basic test", &printf_basic_test);
	load_tests(&printf_testlist, "PRINTF", "Printf S test", &printf_s_test);
	exit_code = launch_tests(&printf_testlist);
	free_tests(&printf_testlist);
	return(exit_code);
}