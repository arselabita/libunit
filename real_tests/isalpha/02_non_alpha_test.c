#include "isalpha.h"

int isalpha_non_alpha_test(void)
{
	char c = '%';

	int my_isalpha = ft_isalpha(c);

	if (my_isalpha == 0)
		return (TEST_SUCCESS); // Test passed
	else
		return (TEST_FAILURE); // Test failed
}