/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:01:28 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/21 15:45:35 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	if(str)
		return (write(1, str, ft_strlen(str)));
	return (0);
}

int	ft_putnbr(long long n)
{
	char	c;
	int		wcount;
	long	nb;

	nb = n;
	wcount = 0;
	if (nb < 0)
	{
		wcount += write(1, "-", 1);
		nb *= -1;
	}
	c = nb % 10 + 48;
	nb = nb / 10;
	if (nb != 0)
		ft_putnbr(nb);
	wcount += write(1, &c, 1);
	return (wcount);
}

int	ft_putunbr(unsigned long long n)
{
	char				c;
	int					wcount;
	unsigned long long	nb;

	nb = n;
	wcount = 0;
	c = nb % 10 + 48;
	nb = nb / 10;
	if (nb != 0)
		ft_putnbr(nb);
	wcount += write(1, &c, 1);
	return (wcount);
}
