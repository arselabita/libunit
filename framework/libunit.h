#ifndef LIBUNIT_H
#define LIBUNIT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include "../libft/libft.h"
#include "../printf/ft_printf.h"

typedef struct s_unit_test
{
	char *name;
	int (*function)(void);
	struct s_unit_test *next;
} t_unit_test;


void load_tests(t_unit_test **tests, char *name, int (*function)(void));
int launch_tests(t_unit_test **tests);
void free_tests(t_unit_test **tests);

#endif