/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoreen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:58:15 by lcoreen           #+#    #+#             */
/*   Updated: 2021/10/22 12:58:31 by lcoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	get_ch(int index, char mode)
{
	if (index >= 0 && index <= 9)
		return (index + '0');
	else if (mode == 'X')
		return ('A' + index - 10);
	else if (mode == 'x')
		return ('a' + index - 10);
	else
		return (0);
}

int	ft_putnbr_hex(unsigned int n, char mode)
{
	int	len;

	len = 0;
	if (n / 16 != 0)
	{
		len += ft_putnbr_hex(n / 16, mode);
		len += ft_putchar(get_ch(n % 16, mode));
	}
	else
		len += ft_putchar(get_ch(n, mode));
	return (len);
}
