/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epolitze <epolitze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:10:13 by epolitze          #+#    #+#             */
/*   Updated: 2023/11/23 10:04:15 by epolitze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h> // SUPPRIME CETTE LIGNE !!!!!!!!!!!!!!!!!!!!

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putaddress(void *ptr, int wcount);
int		ft_putnbr(long long n, int wcount);
int		ft_putunbr(unsigned long long n, int wcount);
size_t	ft_strlen(char *str);
int		ft_puthex(long long nb, int lower, int wcount);

#endif