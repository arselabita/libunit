#include "isalpha.h"

int number_input_test(void)
{
	char c = '1';

	int my_isalpha = ft_isalpha(c);

	if (my_isalpha == 0)
		return (TEST_SUCCESS); // Test passed
	else
		return (TEST_FAILURE); // Test failed
}