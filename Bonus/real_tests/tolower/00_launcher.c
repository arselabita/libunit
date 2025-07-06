/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:45:53 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:46:31 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tolower.h"

int	tolower_launcher(void)
{
	t_unit_test	*testlist;
	int			exit_code;

	exit_code = 0;
	ft_bzero(&testlist, sizeof(t_unit_test *));
	load_tests(&testlist, "TOLOWER", "Basic test", &tolower_basic_test);
	load_tests(&testlist, "TOLOWER", "Non alpha input test", \
	&tolower_symbol_test);
	load_tests(&testlist, "TOLOWER", "Lowercase test", &tolower_lowercase_test);
	load_tests(&testlist, "TOLOWER", "Digit test", &tolower_digit_test);
	exit_code = launch_tests(&testlist);
	free_tests(&testlist);
	return (exit_code);
}
