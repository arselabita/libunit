#include "printf.h"

int printf_basic_test(void)
{
	char *str = "Hello, World!";
	int expected_length = 13;
	int actual_length = ft_printf("%s", str);

	if (actual_length == expected_length)
		return (0); // Test passed
	else
		return (-1); // Test failed
}