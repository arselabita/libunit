#include "test.h"

int SIGABRT_test(void)
{
	// This test will intentionally cause a SIGABRT error
	// by calling abort().
	abort(); // This will trigger SIGABRT
	return (TEST_SUCCESS); // This line will not be reached
}