/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoreen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:57:22 by lcoreen           #+#    #+#             */
/*   Updated: 2021/10/21 17:23:51 by lcoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>
/*
int	get_ch(int p)
{
	if (p >= 0 && p < 10)
		return (p + '0');
	else
		return ('a' + p - 10);
int	ft_putpointer(void *p0)
{
	int i;
	int	res;
	uintptr_t p;
	
	p = (uintptr_t) p0;
	res = ft_putstr("0x");
	i = (sizeof(p) << 3) - 20;
	printf("on start i=%d\n", i);
	while (i >= 0)
	{
		printf("p=%lu; p>>i=%lu\n", p, p >> i);
		printf("after & p>>i=%lu\n\n", (p>>i) & 0xf);
		res += ft_putchar(get_char((p >> i) & 0xf));
		ft_putchar('\n');
		i -= 4;
	}
	return (res);
}*/

int	ft_putpointer(unsigned long long n)
{
	int	len;

	len = ft_putstr("0x");
	len += ft_putnbr_hex(n, 'x');	
	return (len);
}
