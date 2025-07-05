#include "strlen.h"

int basic_test(void)
{
	char *str = "Hello, World!";
	int expected_length = 14;
	int actual_length = ft_strlen(str);

	if (actual_length == expected_length)
		return (0); // Test passed
	else
		return (-1); // Test failed
}