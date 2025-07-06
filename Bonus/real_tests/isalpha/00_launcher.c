/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:24:46 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 16:24:47 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "isalpha.h"

int	isalpha_launcher(void)
{
	t_unit_test	*testlist;
	int			exit_code;

	exit_code = 0;
	ft_bzero(&testlist, sizeof(t_unit_test *));
	load_tests(&testlist, "ISALPHA", "Basic test", &isalpha_basic_test);
	load_tests(&testlist, "ISALPHA", "Non Alpha test", &isalpha_non_alpha_test);
	load_tests(&testlist, "ISALPHA", "Number input test", &number_input_test);
	exit_code = launch_tests(&testlist);
	free_tests(&testlist);
	return (exit_code);
}
