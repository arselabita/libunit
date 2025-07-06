#include "isdigit.h"

int isdigit_launcher(void)
{
	int exit_code;

	exit_code = 0;
	t_unit_test *testlist;
	ft_bzero(&testlist, sizeof(t_unit_test *));
	load_tests(&testlist, "ISDIGIT", "Basic test", &isdigit_basic_test);
	load_tests(&testlist, "ISDIGIT", "Alpha input test", &alpha_input_test);
	load_tests(&testlist, "ISDIGIT", "Non number test", &non_number_input_test);
	exit_code = launch_tests(&testlist);
	free_tests(&testlist);
	return(exit_code);
}