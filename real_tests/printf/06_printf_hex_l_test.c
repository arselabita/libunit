#include "printf.h"

int printf_hex_l_test(void)
{
	int h_l = 123;
	int expected_length = 2;
	int actual_length = ft_printf("%x", h_l);

	if (actual_length == expected_length)
		return (0); // Test passed
	else
		return (-1); // Test failed
}