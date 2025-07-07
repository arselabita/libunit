/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:56:23 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 15:56:26 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	test_launcher(void)
{
	t_unit_test	*testlist;
	int			exit_code;

	exit_code = 0;
	ft_bzero(&testlist, sizeof(t_unit_test *));
	load_tests(&testlist, "TEST", "OK test", &ok_test);
	load_tests(&testlist, "TEST", "SIGSEGV test", &sigsegv_test);
	load_tests(&testlist, "TEST", "KO test", &ko_test);
	load_tests(&testlist, "TEST", "SIGBUS test", &sigbus_test);
	exit_code = launch_tests(&testlist);
	free_tests(&testlist);
	return (exit_code);
}
