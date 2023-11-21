/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_h.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:10:13 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/21 11:49:14 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H_H
# define FT_PRINTF_H_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

int		ft_printf(const char *str, ...);
int		ft_charcmp(char c, char	*str);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putvoid(void *ptr, int wcount);
int		ft_putnbr(long long n);
int		ft_putunbr(unsigned long long n);
size_t	ft_strlen(char *str);
int		ft_puthex(long long nb, int lower, int wcount);

#endif