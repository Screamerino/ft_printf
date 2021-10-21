/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoreen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:20:49 by lcoreen           #+#    #+#             */
/*   Updated: 2021/10/21 16:33:25 by lcoreen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int nbr);
int	ft_putnbr_unsigned(unsigned int nbr);
int	ft_printf(const char *format, ...);
int	ft_putnbr_hex(unsigned long long n, char mode);
int	ft_putpointer(unsigned long long n);

#endif
