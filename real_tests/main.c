#include "main.h"
#include <unistd.h>

int main ()
{
	strlen_launcher();
	write(1, "\n", 1);
	printf_launcher();
	write(1, "\n", 1);
	atoi_launcher();
	write(1, "\n", 1);
	isalpha_launcher();
	write(1, "\n", 1);
	isdigit_launcher();
	write(1, "\n", 1);
	tolower_launcher();
	write(1, "\n", 1);
	toupper_launcher();
	write(1, "\n", 1);
	return (0);
}