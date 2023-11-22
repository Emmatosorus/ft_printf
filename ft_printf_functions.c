/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:01:28 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/22 14:06:48 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	if (str)
		return (write(1, str, ft_strlen(str)));
	return (write(1, "(null)", 6));
}

int	ft_putnbr(long long n, int wcount)
{
	char	c;

	if (n < 0)
	{
		wcount += write(1, "-", 1);
		n *= -1;
	}
	c = n % 10 + '0';
	n = n / 10;
	if (n != 0)
		wcount = ft_putnbr(n, wcount);
	wcount += write(1, &c, 1);
	return (wcount);
}

int	ft_putunbr(unsigned long long n, int wcount)
{
	char				c;
	unsigned long long	nb;

	nb = n;
	c = nb % 10 + 48;
	nb = nb / 10;
	if (nb != 0)
		wcount = ft_putunbr(nb, wcount);
	wcount += write(1, &c, 1);
	return (wcount);
}
