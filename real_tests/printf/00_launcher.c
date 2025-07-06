/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:24:54 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:25:10 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	printf_launcher(void)
{
	t_unit_test	*printf_testlist;
	int			exit_code;

	exit_code = 0;
	ft_bzero(&printf_testlist, sizeof(t_unit_test *));
	load_tests(&printf_testlist, "PRINTF", "Basic test", &printf_basic_test);
	load_tests(&printf_testlist, "PRINTF", "S test", &printf_s_test);
	exit_code = launch_tests(&printf_testlist);
	free_tests(&printf_testlist);
	return (exit_code);
}
