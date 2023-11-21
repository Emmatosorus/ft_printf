/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:45:37 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/21 18:21:00 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_puthex(long long nb, int lower, int wcount)
{
	char	*lhexbase;
	char	*uhexbase;

	lhexbase = "0123456789abcdef";
	uhexbase = "0123456789ABCDEF";
	if (nb < 0)
	{
		wcount += ft_putchar('-');
		nb *= -1;
	}
	if (nb < 16)
	{
		if (lower == 1)
			wcount += ft_putchar(lhexbase[nb]);
		else
			wcount += ft_putchar(uhexbase[nb]);
	}
	else
	{
		wcount = ft_puthex(nb / 16, lower, wcount);
		wcount = ft_puthex(nb % 16, lower, wcount);
	}
	return (wcount);
}
