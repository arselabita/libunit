#include "printf.h"

int printf_hex_u_test(void)
{
	int h_u = 123;
	int expected_length = 2;
	int actual_length = ft_printf("%X", h_u);

	if (actual_length == expected_length)
		return (0); // Test passed
	else
		return (-1); // Test failed
}