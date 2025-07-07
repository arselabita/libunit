/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:47:48 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:48:45 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tolower.h"

int	tolower_basic_test(void)
{
	char	c;
	int		my_tolower;

	c = 'A';
	my_tolower = ft_tolower(c);
	if (my_tolower == 'a')
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
