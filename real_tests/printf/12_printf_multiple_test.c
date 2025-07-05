#include "printf.h"

int printf_multiple_test(void)
{
	int expected_length = 3;
	int actual_length = ft_printf("%%%%c");

	if (actual_length == expected_length)
		return (0); // Test passed
	else
		return (-1); // Test failed
}