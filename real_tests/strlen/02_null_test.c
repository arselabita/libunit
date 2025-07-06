#include "strlen.h"

int null_test(void)
{
	ft_strlen(NULL);
	return (TEST_SUCCESS); // Should not reach here
}