/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguliyev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:35:42 by iguliyev          #+#    #+#             */
/*   Updated: 2025/07/06 20:35:44 by iguliyev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	load_tests(t_unit_test **tests, char *fun_name,
					char *test_name, int (*function)(void))
{
	t_unit_test	*new_test;
	t_unit_test	*current;

	new_test = malloc(sizeof(t_unit_test));
	if (!new_test)
		return ;
	new_test->fun_name = fun_name;
	new_test->test_name = test_name;
	new_test->function = function;
	new_test->next = NULL;
	if (*tests == NULL)
	{
		*tests = new_test;
		return ;
	}
	current = *tests;
	while (current->next != NULL)
		current = current->next;
	current->next = new_test;
}
