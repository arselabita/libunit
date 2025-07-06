/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:21:50 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 16:21:51 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi.h"

int	atoi_basic_test(void)
{
	char	*str;
	int		lib_atoi;
	int		my_atoi;

	str = "42";
	lib_atoi = atoi(str);
	my_atoi = ft_atoi(str);
	if (lib_atoi == my_atoi)
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
