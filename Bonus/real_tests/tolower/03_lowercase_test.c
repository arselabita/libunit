/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_lowercase_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:50:28 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:51:05 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tolower.h"

int	tolower_lowercase_test(void)
{
	char	c;
	int		my_tolower;

	c = 'a';
	my_tolower = ft_tolower(c);
	if (my_tolower == 'a')
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
