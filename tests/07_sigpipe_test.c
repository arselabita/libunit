#include "test.h"

int SIGPIPE_test(void)
{
	// This test will intentionally cause a SIGPIPE error
	// by writing to a pipe that has no reader.
	int pipefd[2];
	char *message = "Hello, World!";
	
	if (pipe(pipefd) == -1)
		return (-1); // Pipe creation failed

	close(pipefd[0]); // Close the read end of the pipe
	write(pipefd[1], message, 13); // This will cause SIGPIPE since there's no reader

	return (TEST_SUCCESS); // This line will not be reached
}