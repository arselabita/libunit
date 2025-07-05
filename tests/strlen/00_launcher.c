/*
    A function to load all the test that you want to run for a specific function.
    This is the first file to be compiled, so the main entry point for this test gorup.
*/
#include "../../framework/libunit.h"

int strlen_launcher(void)
{
    t_unit_test *testlist;

    load_test(&testlist, "Basic test", &basic_test);
    load_test(&testlist, "NULL test", &null_test);
    //load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
    return(launch_tests(&testlist));
}