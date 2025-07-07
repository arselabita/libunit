/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_number_input_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:29:15 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 16:29:50 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "isalpha.h"

int	number_input_test(void)
{
	char	c;
	int		my_isalpha;

	c = '1';
	my_isalpha = ft_isalpha(c);
	if (my_isalpha == 0)
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
