/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:57:47 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:57:59 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toupper.h"

int	toupper_basic_test(void)
{
	char	c;
	int		my_toupper;

	c = 'a';
	my_toupper = ft_toupper(c);
	if (my_toupper == 'A')
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
