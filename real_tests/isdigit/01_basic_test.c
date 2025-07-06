#include "isdigit.h"

int isdigit_basic_test(void)
{
	int d = '1';

	int my_isdigit = ft_isdigit(d);

	if (my_isdigit != 0)
		return (TEST_SUCCESS); // Test passed
	else
		return (TEST_FAILURE); // Test failed
}