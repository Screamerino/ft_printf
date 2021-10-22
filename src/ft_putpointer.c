/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoreen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:57:22 by lcoreen           #+#    #+#             */
/*   Updated: 2021/10/22 12:59:06 by lcoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_ch(int p)
{
	if (p >= 0 && p < 10)
		return (p + '0');
	else
		return ('a' + p - 10);
}

static int	ft_puthex(unsigned long long n)
{
	int	len;

	len = 0;
	if (n / 16 != 0)
	{
		len += ft_puthex(n / 16);
		len += ft_putchar(get_ch(n % 16));
	}
	else
		len += ft_putchar(get_ch(n));
	return (len);
}

int	ft_putpointer(unsigned long long n)
{
	int	len;

	len = ft_putstr("0x");
	len += ft_puthex(n);
	return (len);
}
