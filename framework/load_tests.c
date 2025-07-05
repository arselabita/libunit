#include "libunit.h"

void load_tests(t_unit_test **tests, char *name, int (*function)(void))
{
	write(1, "Loading test:", 13);
	write(1, name, ft_strlen(name));
	write(1, "\n", 1);
	t_unit_test *new_test;
	t_unit_test *current;
	
	new_test = malloc(sizeof(t_unit_test));
	if (!new_test)
		return;
	
	new_test->name = name;
	new_test->function = function;
	new_test->next = NULL;
	
	if (*tests == NULL)
	{
		*tests = new_test;
		return;
	}
	
	current = *tests;
	while (current->next != NULL)
		current = current->next;
	current->next = new_test;
}