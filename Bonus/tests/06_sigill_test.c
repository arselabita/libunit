/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_sigill_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:04:25 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 16:04:26 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	sigill_test(void)
{
	asm("ud2");
	return (TEST_SUCCESS);
}
