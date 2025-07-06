#include "test.h"

int sigalrm_test(void)
{
	// This test will intentionally cause a SIGALRM error
	// by sleeping for too long.
	// sleep(6); // This will trigger SIGALRM if the alarm is set to 5 seconds
	pause(); // Wait for the signal to be delivered
	return (TEST_SUCCESS); // This line will not be reached
}