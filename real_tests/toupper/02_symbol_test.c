/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_symbol_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:58:46 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:58:54 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toupper.h"

int	toupper_symbol_test(void)
{
	char	c;
	int		my_toupper;

	c = '&';
	my_toupper = ft_toupper(c);
	if (my_toupper == '&')
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
