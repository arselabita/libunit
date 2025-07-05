#include "printf.h"

int printf_launcher(void)
{
	// write(1, "Launching printf tests...\n", 26);
	t_unit_test *printf_testlist;
	ft_bzero(&printf_testlist, sizeof(t_unit_test *));
	load_tests(&printf_testlist, "Printf Basic test", &printf_basic_test);
	return(launch_tests(&printf_testlist));
}