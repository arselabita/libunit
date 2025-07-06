#include "atoi.h"

int atoi_launcher(void)
{
	int exit_code;

	exit_code = 0;
	t_unit_test *testlist;
	ft_bzero(&testlist, sizeof(t_unit_test *));
	load_tests(&testlist, "ATOI", "Basic test", &atoi_basic_test);
	// load_tests(&testlist, "ATOI", "Error test", &null_test);
	// load_tests(&testlist, "ATOI", "Overflow test", &bigger_str_test);
	exit_code = launch_tests(&testlist);
	free_tests(&testlist);
	return(exit_code);
}