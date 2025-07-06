/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_digit_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:52:59 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:53:08 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tolower.h"

int	tolower_digit_test(void)
{
	char	c;
	int		my_tolower;

	c = '5';
	my_tolower = ft_tolower(c);
	if (my_tolower == '5')
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
