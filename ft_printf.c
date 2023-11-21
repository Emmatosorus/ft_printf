/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:08:43 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/21 10:05:52 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_h.h"

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

char	*argument_manager(char c, va_list arg)
{
	if (c == 'c')
		ft_putchar(va_arg(arg, int));
	else if (c == 's')
		ft_putstr(va_arg(arg, char *));
	else if (c == 'p')
		ft_putvoid(va_arg(arg, void *));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(arg, long long));
	else if (c == 'u')
		ft_putunbr(va_arg(arg, unsigned long long));
	else if (c == 'x' || c == 'X')
		ft_puthex(va_arg(arg, unsigned long long), c != 'X');
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		c;
	va_list	params;

	i = 0;
	va_start(params, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_charcmp(str[i + 1], "cspdiuxX%") == 1)
			argument_manager(str[i + 1], &params);
		else
		{
			c = write(1, &str[i], 1);
			if (!c)
				return (-1);
		}
		i++;
	}
	va_end(params);
	return ("number of printed");
}

int	main(int argc, char **argv)
{
	while (argc-- > 1)
	{
		ft_printf("%s", argv[argc]);
		ft_printf("\n");
	}
}