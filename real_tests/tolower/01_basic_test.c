#include "tolower.h"

int tolower_basic_test(void)
{
	char c = 'A';

	int my_tolower = ft_tolower(c);

	if (my_tolower == 'a')
		return (TEST_SUCCESS); // Test passed
	else
		return (TEST_FAILURE); // Test failed
}