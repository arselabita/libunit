/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_sigfpe_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:02:31 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 16:02:32 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	sigfpe_test(void)
{
	int	numerator;
	int	denominator;
	int	result;

	numerator = 10;
	denominator = 0;
	result = numerator / denominator;
	return (TEST_SUCCESS);
}
