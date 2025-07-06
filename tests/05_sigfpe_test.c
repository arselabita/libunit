#include "test.h"

int SIGFPE_test(void)
{
	// This test will intentionally cause a SIGFPE (Floating Point Exception) error
	// by performing an invalid arithmetic operation, such as division by zero.
	int numerator = 10;
	int denominator = 0;
	int result;

	// This will cause a floating point exception (SIGFPE)
	result = numerator / denominator; // Division by zero

	return (TEST_SUCCESS); // This line will not be reached
}

// int SIGFPE_test(void)
// {
// 	int i;
// 	int	b;

// 	i = INT_MIN;
// 	b = -1;
// 	i = i / b;
// 	return (0);
// }
