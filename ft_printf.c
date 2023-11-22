/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:08:43 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/22 14:15:04 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_charcmp(char c, char	*str)
{
	int	i;

	if (!c)
		return (-1);
	else
	{
		i = 0;
		while (str[i])
		{
			if (str[i] == c)
				return (1);
			i++;
		}
	}
	return (0);
}

int	null_check(void *ptr, int wcount)
{
	int	temp;

	if (ptr)
	{
		temp = ft_putstr("0x");
		wcount += temp + ft_putaddress(ptr, wcount);
	}
	else
		wcount += ft_putstr("(nil)");
	return (wcount);
}

int	argument_manager(char c, va_list *arg, int wcount)
{
	int	temp;

	if (c == 'c')
		wcount += ft_putchar(va_arg(*arg, int));
	else if (c == 's')
		wcount += ft_putstr(va_arg(*arg, char *));
	else if (c == 'p')
	{
		wcount = null_check(va_arg(*arg, void *), wcount);
	}
	else if (c == 'd' || c == 'i')
		wcount = ft_putnbr(va_arg(*arg, int), wcount);
	else if (c == 'u')
		wcount = ft_putunbr(va_arg(*arg, unsigned long long), wcount);
	else if (c == 'x' || c == 'X')
		wcount = ft_puthex(va_arg(*arg, unsigned long long), c != 'X', wcount);
	else
		wcount += ft_putchar('%');
	return (wcount);
}

int	ft_printf_2(int i, int wcount, const char *str, va_list *arg)
{
	int	temp;

	temp = wcount;
	wcount = argument_manager(str[i + 1], arg, wcount);
	if (temp - 1 == wcount)
		return (-1);
	return (wcount);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		wcount;
	va_list	arg;

	i = -1;
	wcount = 0;
	va_start(arg, str);
	if (!str)
		return (-1);
	while (str[++i] != 0)
	{
		if (str[i] == '%' && ft_charcmp(str[i + 1], "cspdiuxX%") == 1)
		{
			wcount = ft_printf_2(i, wcount, str, &arg);
			i++;
		}
		else
		{
			if (!write(1, &str[i], 1))
				return (-1);
			wcount++;
		}
	}
	va_end(arg);
	return (wcount);
}
