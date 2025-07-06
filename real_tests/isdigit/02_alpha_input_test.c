/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_alpha_input_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:18:03 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:18:04 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "isdigit.h"

int	alpha_input_test(void)
{
	int	d;
	int	my_isdigit;

	d = 'a';
	my_isdigit = ft_isdigit(d);
	if (my_isdigit == 0)
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
