/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:16:43 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:16:46 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "isdigit.h"

int	isdigit_basic_test(void)
{
	int	d;
	int	my_isdigit;

	d = '1';
	my_isdigit = ft_isdigit(d);
	if (my_isdigit != 0)
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
