/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_ko_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 18:10:12 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 18:10:14 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	ko_test(void)
{
	int	result;

	result = 1;
	if (result == 0)
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
