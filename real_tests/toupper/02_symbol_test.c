#include "toupper.h"

int toupper_symbol_test(void)
{
	char c = '&';

	int my_toupper = ft_toupper(c);

	if (my_toupper == '&')
		return (TEST_SUCCESS); // Test passed
	else
		return (TEST_FAILURE); // Test failed
}