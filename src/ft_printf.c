/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoreen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:36:11 by lcoreen           #+#    #+#             */
/*   Updated: 2021/10/20 13:28:50 by lcoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libprintf.h"

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
			//while (*format == ' ')
			//	++format; !skip spaces!
			if (*format == 's')
				res += ft_putstr(va_arg(ap, char*));
			else if (*format == 'c')
				res += ft_putchar(va_arg(ap, int));
			else if (*format == 'i' || *format == 'd')
				res += ft_putnbr(va_arg(ap, int));
			else if (*format == 'u')
				res += ft_putnbr_unsigned(va_arg(ap, unsigned int));
			else if (*format == '%')
				res += ft_putchar('%');
		}
		else
			res += ft_putchar(*format);
		++format;
	}
	va_end(ap);
	return (res);
}
