/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:15:14 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:16:05 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "isdigit.h"

int	isdigit_launcher(void)
{
	t_unit_test	*testlist;
	int			exit_code;

	exit_code = 0;
	ft_bzero(&testlist, sizeof(t_unit_test *));
	load_tests(&testlist, "ISDIGIT", "Basic test", &isdigit_basic_test);
	load_tests(&testlist, "ISDIGIT", "Alpha input test", &alpha_input_test);
	load_tests(&testlist, "ISDIGIT", "Non number test", &non_number_input_test);
	exit_code = launch_tests(&testlist);
	free_tests(&testlist);
	return (exit_code);
}
