/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:32:32 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/22 14:35:01 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress(void *ptr, int wcount)
{
	char				*hexbase;
	unsigned long long	nb;
	int					check;

	nb = (unsigned long long)ptr;
	hexbase = "0123456789abcdef";
	if (nb < 16)
	{
		check = ft_putchar(hexbase[nb]);
		if (check == -1)
			return (-1);
	}
	else
	{
		wcount = ft_putaddress((void *)(nb / 16), wcount);
		if (wcount == -1)
			return (-1);
		wcount = ft_putaddress((void *)(nb % 16), wcount);
		if (wcount == -1)
			return (-1);
	}
	return (wcount);
}
