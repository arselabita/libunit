#include "strlen.h"

int basic_test(void)
{
	char *str = "Hello, World!";
	int expected_length = 13;
	int actual_length = ft_strlen(str);

	if (actual_length == expected_length)
		return (TEST_SUCCESS); // Test passed
	else
		return (TEST_FAILURE); // Test failed
}