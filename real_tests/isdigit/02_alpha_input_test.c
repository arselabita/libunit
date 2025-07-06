#include "isdigit.h"

int alpha_input_test(void)
{
	int d = 'a';

	int my_isdigit = ft_isdigit(d);

	if (my_isdigit == 0)
		return (TEST_SUCCESS); // Test passed
	else
		return (TEST_FAILURE); // Test failed
}