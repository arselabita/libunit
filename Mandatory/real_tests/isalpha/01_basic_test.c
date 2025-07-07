/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:25:38 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 16:27:28 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "isalpha.h"

int	isalpha_basic_test(void)
{
	char	c;
	int		my_isalpha;

	c = 'a';
	my_isalpha = ft_isalpha(c);
	if (my_isalpha != 0)
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
