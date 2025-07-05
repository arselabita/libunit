#include "printf.h"

int printf_char_test(void)
{
	char c = 'a';
	int expected_length = 1;
	int actual_length = ft_printf("%c", c);

	if (actual_length == expected_length)
		return (0); // Test passed
	else
		return (-1); // Test failed
}