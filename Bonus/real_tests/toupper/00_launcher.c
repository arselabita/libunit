/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:55:11 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:55:53 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toupper.h"

int	toupper_launcher(void)
{
	t_unit_test	*testlist;
	int			exit_code;

	exit_code = 0;
	ft_bzero(&testlist, sizeof(t_unit_test *));
	load_tests(&testlist, "TOUPPER", "Basic test", &toupper_basic_test);
	load_tests(&testlist, "TOUPPER", "Non alpha input test", \
	&toupper_symbol_test);
	load_tests(&testlist, "TOUPPER", "Uppercase test", &toupper_uppercase_test);
	load_tests(&testlist, "TOUPPER", "Digit test", &toupper_digit_test);
	exit_code = launch_tests(&testlist);
	free_tests(&testlist);
	return (exit_code);
}
