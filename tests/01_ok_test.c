/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ok_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:58:09 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 15:58:12 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	ok_test(void)
{
	int	result;

	result = 0;
	if (result == 0)
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
