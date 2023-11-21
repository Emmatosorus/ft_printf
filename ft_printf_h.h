/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_h.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:10:13 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/21 10:01:19 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H_H
# define FT_PRINTF_H_H

# include <stdarg.h>
# include <stddef.h>

int		ft_printf(const char *str, ...);
int		ft_charcmp(char c, char	*str);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putvoid(void *ptr);
void	ft_putnbr(long long n);
void	ft_putunbr(unsigned long long n);
size_t	ft_strlen(char *str);

#endif