/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:32:32 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/22 18:36:48 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress(void *ptr, int wcount)
{
	char				*hexbase;
	unsigned long long	nb;
	int					temp;

	nb = (unsigned long long)ptr;
	temp = ft_puthex(nb, 1, 0);
	if (temp == -1)
		return (-1);
	wcount += temp;
	return (wcount);
}
