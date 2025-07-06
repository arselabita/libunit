#include "printf.h"

int printf_s_test(void)
{
	char *str = "Hello, World!";
	char buffer[100] = {0};
	int pipe_fd[2];

	pipe(pipe_fd); // Create a pipe to capture output
	int saved_stdout = dup(STDOUT_FILENO); // Save the current stdout
	dup2(pipe_fd[1], STDOUT_FILENO); // Redirect stdout to the pipe
	close(pipe_fd[1]); // Close the write end of the pipe
	ft_printf("%s", str);
	fflush(stdout); // Ensure all output is written to the pipe
	dup2(saved_stdout, STDOUT_FILENO); // Restore stdout
	close(saved_stdout); // Close the saved stdout file descriptor
	read(pipe_fd[0], buffer, sizeof(buffer) - 1); // Read from the pipe
	close(pipe_fd[0]); // Close the read end of the pipe
	if (strcmp(buffer, str) == 0)
		return (TEST_SUCCESS); // Test passed
	else
		return (TEST_FAILURE); // Test failed
}