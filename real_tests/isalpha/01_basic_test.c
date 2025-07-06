#include "isalpha.h"

int isalpha_basic_test(void)
{
	char c = 'a';

	int my_isalpha = ft_isalpha(c);

	if (my_isalpha != 0)
		return (TEST_SUCCESS); // Test passed
	else
		return (TEST_FAILURE); // Test failed
}