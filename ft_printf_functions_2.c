/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:45:37 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/22 18:34:07 by epolitze         ###   ########.fr       */
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
	int 	temp;
	char	*hexbase;

	if (lower == 1)
		hexbase = "0123456789abcdef";
	else
		hexbase = "0123456789ABCDEF";
	if (nb >= 16)
	{
		wcount = ft_puthex(nb / 16, lower, wcount);
		temp = ft_putchar(hexbase[nb % 16]);
	}
	else
		temp = ft_putchar(hexbase[nb % 16]);
	if (temp == -1)
		return (-1);
	wcount += temp;
	return (wcount);
}
