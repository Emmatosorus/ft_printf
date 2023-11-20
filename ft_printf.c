/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:08:43 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/20 15:00:15 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_h.h"

char	*argument_manager(char c, void *arg)
{
	
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	params;

	i = 0;
	va_start(params, str);
	while (str[i])
	{
		if ()
	}
	va_end(params);
}

int	main(int argc, char **argv)
{
	while (argc-- > 1)
	{
		ft_printf("%s", argv[argc]);
		ft_printf("\n");
	}
}

// 	while (str[i])
// 	{
// 		while (str[i] != 0 && str[i++] != '%')
// 		{
// 			write(1, str[i], 1);
// 			i++;
// 		}
// 		if (str[++i] == '%')
// 			write(1, "%", 1);
// 		else if (str[i] == 'c')
// 			ft_putchar_fd();
// 	}