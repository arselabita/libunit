#include "printf.h"

int printf_percentage_test(void)
{
	int expected_length = 1;
	int actual_length = ft_printf("%%");

	if (actual_length == expected_length)
		return (0); // Test passed
	else
		return (-1); // Test failed
}