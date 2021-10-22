/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoreen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:36:11 by lcoreen           #+#    #+#             */
/*   Updated: 2021/10/22 15:04:31 by lcoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	check_char(char c, int *res, va_list ap)
{
	if (c == 's')
		*res += ft_putstr(va_arg(ap, char *));
	else if (c == 'c')
		*res += ft_putchar(va_arg(ap, int));
	else if (c == 'i' || c == 'd')
		*res += ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		*res += ft_putnbr_unsigned(va_arg(ap, unsigned int));
	else if (c == '%')
		*res += ft_putchar('%');
	else if (c == 'x' || c == 'X')
		*res += ft_putnbr_hex(va_arg(ap, unsigned int), c);
	else if (c == 'p')
		*res += ft_putpointer(va_arg(ap, unsigned long long));
	else
		return (-1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		res;

	va_start(ap, format);
	res = 0;
	while (*format)
	{
		if (*format == '%')
		{
			++format;
			if (check_char(*format, &res, ap) == -1)
				return (-1);
		}
		else
			res += ft_putchar(*format);
		++format;
	}
	va_end(ap);
	return (res);
}
