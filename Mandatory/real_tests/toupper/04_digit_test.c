/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_digit_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 18:05:44 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 18:05:51 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toupper.h"

int	toupper_digit_test(void)
{
	char	c;
	int		my_toupper;

	c = '6';
	my_toupper = ft_toupper(c);
	if (my_toupper == '6')
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
