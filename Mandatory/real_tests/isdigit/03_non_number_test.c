/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_non_number_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:18:59 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:19:01 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "isdigit.h"

int	non_number_input_test(void)
{
	int	d;
	int	my_isdigit;

	d = '&';
	my_isdigit = ft_isdigit(d);
	if (my_isdigit == 0)
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
