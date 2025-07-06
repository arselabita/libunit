#include "main.h"
#include <unistd.h>

int main ()
{
	test_launcher();
	write(1, "\n", 1);
	return (0);
}