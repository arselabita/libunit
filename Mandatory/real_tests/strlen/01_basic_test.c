/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:33:17 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:33:46 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen.h"

int	strlen_basic_test(void)
{
	char	*str;
	int		expected_length;
	int		actual_length;

	str = "Hello, World!";
	expected_length = 13;
	actual_length = ft_strlen(str);
	if (actual_length == expected_length)
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
