/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguliyev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:54:55 by iguliyev          #+#    #+#             */
/*   Updated: 2023/10/10 17:55:04 by iguliyev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putptr_writer(unsigned long n)
{
	int	result;

	result = 0;
	if (n <= 15)
		result = result + ft_putchar("0123456789abcdef"[n]);
	else
	{
		result = result + ft_putptr_writer(n / 16);
		result = result + ft_putptr_writer(n % 16);
	}
	return (result);
}

int	ft_putptr(void *p)
{
	int				result;
	unsigned long	ptr;

	result = 0;
	if (!p)
		return (write(1, "(nil)", 5));
	ptr = (unsigned long)p;
	result = result + write(1, "0x", 2);
	result = result + ft_putptr_writer(ptr);
	return (result);
}
