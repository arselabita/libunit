/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguliyev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:54:32 by iguliyev          #+#    #+#             */
/*   Updated: 2023/10/10 17:54:41 by iguliyev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char format)
{
	int	result;

	result = 0;
	if (n <= 15)
	{
		if (format == 'x')
			result = result + ft_putchar("0123456789abcdef"[n]);
		else
			result = result + ft_putchar("0123456789ABCDEF"[n]);
	}
	else
	{
		result = result + ft_puthex(n / 16, format);
		result = result + ft_puthex(n % 16, format);
	}
	return (result);
}
