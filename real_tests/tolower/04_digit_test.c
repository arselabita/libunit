#include "tolower.h"

int tolower_digit_test(void)
{
	char c = '5';

	int my_tolower = ft_tolower(c);

	if (my_tolower == '5')
		return (TEST_SUCCESS); // Test passed
	else
		return (TEST_FAILURE); // Test failed
}