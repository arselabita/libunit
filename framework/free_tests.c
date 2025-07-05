#include "libunit.h"

void free_tests(t_unit_test **tests)
{
	t_unit_test *current;
	t_unit_test *next;

	if (!tests || !*tests)
		return;

	current = *tests;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*tests = NULL;
}