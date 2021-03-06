/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoreen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:13:31 by lcoreen           #+#    #+#             */
/*   Updated: 2021/10/21 17:22:54 by lcoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	flag;
	int	len;

	flag = 1;
	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		flag = -1;
	}
	if (n / 10 != 0)
	{
		len += ft_putnbr((n / 10) * flag);
		len += ft_putchar((n % 10) * flag + '0');
	}
	else
		len += ft_putchar(n * flag + '0');
	return (len);
}
