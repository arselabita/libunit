#include "test.h"

int SIGILL_test(void)
{
	// This test will intentionally cause a SIGILL (Illegal Instruction) error
	// by executing an invalid instruction.
	asm("ud2"); // This is an undefined instruction that will trigger SIGILL
	return (TEST_SUCCESS); // This line will not be reached
}