#include "isalpha.h"

int isalpha_launcher(void)
{
	int exit_code;

	exit_code = 0;
	t_unit_test *testlist;
	ft_bzero(&testlist, sizeof(t_unit_test *));
	load_tests(&testlist, "ISALPHA", "Basic test", &isalpha_basic_test);
	load_tests(&testlist, "ISALPHA", "Non Alpha test", &isalpha_non_alpha_test);
	load_tests(&testlist, "ISALPHA", "Number input test", &number_input_test);
	exit_code = launch_tests(&testlist);
	free_tests(&testlist);
	return(exit_code);
}