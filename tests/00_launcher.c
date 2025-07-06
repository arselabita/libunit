#include "test.h"

int test_launcher(void)
{
	int exit_code;

	exit_code = 0;
	t_unit_test *testlist;
	ft_bzero(&testlist, sizeof(t_unit_test *));
	load_tests(&testlist, "TEST", "OK test", &OK_test);
	load_tests(&testlist, "TEST", "SIGSEGV test", &SIGSEGV_test);
	load_tests(&testlist, "TEST", "KO test", &KO_test);
	load_tests(&testlist, "TEST", "SIGBUS test", &SIGBUS_test);
	load_tests(&testlist, "TEST", "SIGFPE test", &SIGFPE_test);
	load_tests(&testlist, "TEST", "SIGILL test", &SIGILL_test);
	load_tests(&testlist, "TEST", "SIGPIPE test", &SIGPIPE_test);
	load_tests(&testlist, "TEST", "SIGABRT test", &SIGABRT_test);
	load_tests(&testlist, "TEST", "SIGALRM test", &sigalrm_test);
	exit_code = launch_tests(&testlist);
	free_tests(&testlist);
	return(exit_code);
}