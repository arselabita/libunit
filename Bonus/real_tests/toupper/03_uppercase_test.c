/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_uppercase_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:59:09 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:59:10 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toupper.h"

int	toupper_uppercase_test(void)
{
	char	c;
	int		my_toupper;

	c = 'A';
	my_toupper = ft_toupper(c);
	if (my_toupper == 'A')
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
