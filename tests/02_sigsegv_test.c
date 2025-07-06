#include "test.h"

int SIGSEGV_test(void)
{
	char *ptr;

	ptr = NULL;
	ptr[0] = 'a'; // This will cause a segmentation fault (SIGSEGV)
	return (TEST_SUCCESS); // This line will not be reached
}