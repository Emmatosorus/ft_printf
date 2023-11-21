/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:32:32 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/21 17:55:10 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress(void *ptr, int wcount)
{
	char				*hexbase;
	unsigned long long	nb;

	nb = (unsigned long long)ptr;
	hexbase = "0123456789abcdef";
	if (nb < 16)
		ft_putchar(hexbase[nb]);
	else
	{
		wcount = ft_putaddress((void *)(nb / 16), wcount);
		wcount = ft_putaddress((void *)(nb % 16), wcount);
	}
	return (wcount);
}
