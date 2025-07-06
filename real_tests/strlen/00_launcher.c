/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:32:04 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:32:11 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen.h"

int	strlen_launcher(void)
{
	t_unit_test	*testlist;
	int			exit_code;

	exit_code = 0;
	ft_bzero(&testlist, sizeof(t_unit_test *));
	load_tests(&testlist, "STRLEN", "Basic test", &strlen_basic_test);
	load_tests(&testlist, "STRLEN", "NULL test", &strlen_null_test);
	load_tests(&testlist, "STRLEN", "Bigger string test", &bigger_str_test);
	exit_code = launch_tests(&testlist);
	free_tests(&testlist);
	return (exit_code);
}
