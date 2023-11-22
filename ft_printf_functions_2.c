/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:45:37 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/22 14:59:22 by epolitze         ###   ########.fr       */
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

int	ft_putcharhex(int lower, int wcount, int nb)
{
	char	*lhexbase;
	char	*uhexbase;
	int		temp;

	lhexbase = "0123456789abcdef";
	uhexbase = "0123456789ABCDEF";
	if (lower == 1)
	{
		temp = wcount;
		wcount += ft_putchar(lhexbase[nb]);
		if (wcount == temp - 1)
			return (-1);
	}
	else
	{
		temp = wcount;
		wcount += ft_putchar(uhexbase[nb]);
		if (wcount == temp - 1)
			return (-1);
	}
	return (wcount);
}

int	ft_puthex(long long nb, int lower, int wcount)
{
	if (nb < 16)
	{
		wcount = ft_putcharhex(lower, wcount, nb);
		if (wcount == -1)
			return (-1);
	}
	else
	{
		wcount = ft_puthex(nb / 16, lower, wcount);
		if (wcount == -1)
			return (-1);
		wcount = ft_puthex(nb % 16, lower, wcount);
		if (wcount == -1)
			return (-1);
	}
	return (wcount);
}
