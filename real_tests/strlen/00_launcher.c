#include "strlen.h"

int strlen_launcher(void)
{
	// write(1, "Launching strlen tests...\n", 26);
	t_unit_test *testlist;
	ft_bzero(&testlist, sizeof(t_unit_test *));
	load_tests(&testlist, "Basic test", &basic_test);
	load_tests(&testlist, "NULL test", &null_test);
	load_tests(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	return(launch_tests(&testlist));
}