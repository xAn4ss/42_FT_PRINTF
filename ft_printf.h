/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 22:02:09 by aoukhart          #+#    #+#             */
/*   Updated: 2021/12/02 05:16:03 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		g_counter;
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_put_hex(unsigned long long n, int cap);
void	ft_put_int(long long n);
int		ft_check_type(char c, va_list ap, int counter);
int		ft_printf(const char *s, ...);
va_list	g_ap;
#endif
