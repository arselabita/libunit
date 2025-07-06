#include "atoi.h"

int atoi_basic_test(void)
{
	char *str = "42";

	int lib_atoi = atoi(str);
	int my_atoi = ft_atoi(str);

	if (lib_atoi == my_atoi)
		return (TEST_SUCCESS); // Test passed
	else
		return (TEST_FAILURE); // Test failed
}