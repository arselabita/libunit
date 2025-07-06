#include "tolower.h"

int tolower_symbol_test(void)
{
	char c = '!';

	int my_tolower = ft_tolower(c);

	if (my_tolower == '!')
		return (TEST_SUCCESS); // Test passed
	else
		return (TEST_FAILURE); // Test failed
}