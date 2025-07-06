/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguliyev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:53:33 by iguliyev          #+#    #+#             */
/*   Updated: 2023/10/10 17:53:42 by iguliyev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = len + ft_putchar(va_arg(args, int));
	else if (format == 's')
		len = len + ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		len = len + ft_putptr(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		len = len + ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		len = len + ft_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len = len + ft_puthex(va_arg(args, unsigned int), format);
	else if (format == '%')
		len = len + ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, str);
	count = 0;
	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			count = count + ft_formats(args, str[i + 1]);
			i = i + 2;
		}
		else if (str[i] != '\0' && str[i] != '%')
		{
			count = count + ft_putchar(str[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
