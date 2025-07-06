#include "isdigit.h"

int non_number_input_test(void)
{
	int d = '&';

	int my_isdigit = ft_isdigit(d);

	if (my_isdigit == 0)
		return (TEST_SUCCESS); // Test passed
	else
		return (TEST_FAILURE); // Test failed
}