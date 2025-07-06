#include "test.h"

int SIGBUS_test(void)
{
	FILE	*f;
	int		*m;

	f = tmpfile();
	m = mmap(0, 4, PROT_WRITE, MAP_PRIVATE, fileno(f), 0);
	*m = 0;
	return (TEST_SUCCESS); // This line will not be reached
}