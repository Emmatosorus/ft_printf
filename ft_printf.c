/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:08:43 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/17 16:39:56 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_h.h"

char	*argument_manager(char c, void *arg)
{
	
}

int	ft_printf(const char *str, ...)
{
	int		i;

	i = 0;
	while (str[i] != '%' && str[i])
		ft_putchar_fd(str[i++], 1);
	if (str[i++] == '%')
	{
		ft_putchar_fd(argument_manager(str[i], va_arg(ar, (void *)), 1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	while (argc-- > 1)
	{
		ft_printf(argv[argc]);
		ft_printf("\n");
	}
}