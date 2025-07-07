/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_symbol_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:49:48 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:50:12 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tolower.h"

int	tolower_symbol_test(void)
{
	char	c;
	int		my_tolower;

	c = '!';
	my_tolower = ft_tolower(c);
	if (my_tolower == '!')
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
