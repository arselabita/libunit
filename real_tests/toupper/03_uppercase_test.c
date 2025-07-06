#include "toupper.h"

int toupper_uppercase_test(void)
{
	char c = 'A';

	int my_toupper = ft_toupper(c);

	if (my_toupper == 'A')
		return (TEST_SUCCESS); // Test passed
	else
		return (TEST_FAILURE); // Test failed
}