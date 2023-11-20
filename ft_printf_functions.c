/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:01:28 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/20 17:00:01 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_h.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	ft_putvoid(void *ptr)
{
	ft_putstr(ptr);
}

ft_putnbr(long long n)
{
	char	c;
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	c = nb % 10 + 48;
	nb = nb / 10;
	if (nb != 0)
		ft_putnbr_fd(nb, 1);
	write(1, &c, 1);
	return ;
}

ft_putunbr(unsigned long long n)
{
	char				c;
	unsigned long long	nb;

	nb = n;
	c = nb % 10 + 48;
	nb = nb / 10;
	if (nb != 0)
		ft_putnbr_fd(nb, 1);
	write(1, &c, 1);
	return ;
}
