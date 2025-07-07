/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguliyev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:34:49 by iguliyev          #+#    #+#             */
/*   Updated: 2025/07/06 20:34:51 by iguliyev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	ft_clean(t_unit_test **tests, char *name)
{
	ft_printf("%s failed\n", name);
	free_tests(tests);
	exit(EXIT_FAILURE);
}

int	ft_print_results(int count, int success, char *fun_name)
{
	int	code;

	code = 0;
	if (count == success)
	{
		ft_printf(GREEN "%d/%d" RESET " tests checked for %s\n",
			success, count, fun_name);
		code = 0;
	}
	else
	{
		ft_printf(YELLOW "%d/%d" RESET " tests checked for %s\n",
			success, count, fun_name);
		code = -1;
	}
	return (code);
}

void	ft_print_single_result(t_unit_test *test, int i)
{
	if (i == TEST_SUCCESS)
	{
		ft_printf("%s: %s : " GREEN "[OK]" RESET "\n",
			test->fun_name, test->test_name);
	}
	else if (i == TEST_FAILURE)
	{
		ft_printf("%s: %s : " RED "[KO]" RESET "\n",
			test->fun_name, test->test_name);
	}
	else
	{
		ft_printf("%s: %s : " RED "[UNKNOWN]" RESET "\n",
			test->fun_name, test->test_name);
	}
}
