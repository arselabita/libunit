#include "toupper.h"

int toupper_launcher(void)
{
	int exit_code;

	exit_code = 0;
	t_unit_test *testlist;
	ft_bzero(&testlist, sizeof(t_unit_test *));
	load_tests(&testlist, "TOUPPER", "Basic test", &toupper_basic_test);
	load_tests(&testlist, "TOUPPER", "Non alpha input test", &toupper_symbol_test);
	load_tests(&testlist, "TOUPPER", "Uppercase test", &toupper_uppercase_test);
	load_tests(&testlist, "TOUPPER", "Digit test", &toupper_digit_test);
	exit_code = launch_tests(&testlist);
	free_tests(&testlist);
	return(exit_code);
}