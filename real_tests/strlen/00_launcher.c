#include "strlen.h"

int strlen_launcher(void)
{
	int exit_code;

	exit_code = 0;
	t_unit_test *testlist;
	ft_bzero(&testlist, sizeof(t_unit_test *));
	load_tests(&testlist, "STRLEN", "Basic test", &basic_test);
	load_tests(&testlist, "STRLEN", "NULL test", &null_test);
	load_tests(&testlist, "STRLEN", "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	exit_code = launch_tests(&testlist);
	free_tests(&testlist);
	return(exit_code);
}