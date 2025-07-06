#include "printf.h"

int printf_basic_test(void)
{
	char *str = "Hello, World!";
	int expected_length = 13;
	int actual_length = 0;
	int saved_stdout = dup(STDOUT_FILENO); // Save the current stdout
	int null_fd = open("/dev/null", O_WRONLY); // Open /dev/null to discard output
	dup2(null_fd, STDOUT_FILENO); // Redirect stdout to /dev/null
	close(null_fd); // Close the /dev/null file descriptor
	actual_length = ft_printf("%s", str);
	dup2(saved_stdout, STDOUT_FILENO); // Restore stdout
	close(saved_stdout); // Close the saved stdout file descriptor
	if (actual_length == expected_length)
		return (TEST_SUCCESS); // Test passed
	else
		return (TEST_FAILURE); // Test failed
}