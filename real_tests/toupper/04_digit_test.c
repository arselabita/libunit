#include "toupper.h"

int toupper_digit_test(void)
{
	char c = '6';

	int my_toupper = ft_toupper(c);

	if (my_toupper == '6')
		return (TEST_SUCCESS); // Test passed
	else
		return (TEST_FAILURE); // Test failed
}