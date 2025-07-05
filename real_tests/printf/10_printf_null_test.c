#include "printf.h"

int printf_null_test(void)
{
	int expected_length = -1;
	int actual_length = ft_printf(NULL);

	if (actual_length == expected_length)
		return (0); // Test passed
	else
		return (-1); // Test failed
}