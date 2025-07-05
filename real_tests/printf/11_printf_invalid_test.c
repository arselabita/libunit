#include "printf.h"

int printf_invalid_test(void)
{
	int expected_length = 2;
	int actual_length = ft_printf("%,");

	if (actual_length == expected_length)
		return (0); // Test passed
	else
		return (-1); // Test failed
}