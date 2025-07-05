#include "printf.h"

int printf_digit_test(void)
{
	int i = 12;
	int expected_length = 2;
	int actual_length = ft_printf("%i", i);

	if (actual_length == expected_length)
		return (0); // Test passed
	else
		return (-1); // Test failed
}