/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguliyev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:51:38 by iguliyev          #+#    #+#             */
/*   Updated: 2023/10/10 17:52:07 by iguliyev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int		result;

	result = 0;
	if (n == -2147483648)
		return (write (1, "-2147483648", 11));
	if (n < 0)
	{
		n = -n;
		result = result + ft_putchar('-');
	}
	if (n <= 9)
		result = result + ft_putchar(n + '0');
	else
	{
		result = result + ft_putnbr(n / 10);
		result = result + ft_putnbr(n % 10);
	}
	return (result);
}

int	ft_unsigned(unsigned int n)
{
	int		result;

	result = 0;
	if (n <= 9)
		result = result + ft_putchar(n + '0');
	else
	{
		result = result + ft_unsigned(n / 10);
		result = result + ft_unsigned(n % 10);
	}
	return (result);
}
