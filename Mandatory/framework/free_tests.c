/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguliyev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:32:41 by iguliyev          #+#    #+#             */
/*   Updated: 2025/07/06 20:33:38 by iguliyev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	free_tests(t_unit_test **tests)
{
	t_unit_test	*current;
	t_unit_test	*next;

	if (!tests || !*tests)
		return ;
	current = *tests;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*tests = NULL;
}
