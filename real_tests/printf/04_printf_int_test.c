#include "printf.h"

int printf_int_test(void)
{
	int d = 12;
	int expected_length = 2;
	int actual_length = ft_printf("%d", d);

	if (actual_length == expected_length)
		return (0); // Test passed
	else
		return (-1); // Test failed
}