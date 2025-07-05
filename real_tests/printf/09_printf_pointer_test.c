#include "printf.h"

int printf_pointer_test(void)
{
    char	*test = "blabla";
	int expected_length = 8;
	int actual_length = ft_printf("%p", test);

	if (actual_length == expected_length)
		return (0); // Test passed
	else
		return (-1); // Test failed
}