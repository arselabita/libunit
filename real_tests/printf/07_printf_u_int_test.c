#include "printf.h"

int printf_u_int_test(void)
{
	int u = 12;
	int expected_length = 2;
	int actual_length = ft_printf("%u", u);

	if (actual_length == expected_length)
		return (0); // Test passed
	else
		return (-1); // Test failed
}