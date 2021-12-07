/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 03:05:27 by aoukhart          #+#    #+#             */
/*   Updated: 2021/12/07 02:39:21 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int	i;

	i = 0;
	g_counter = 0;
	va_start(g_ap, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ft_check_type(s[i], g_ap, g_counter);
		}
		else
		{
			ft_putchar(s[i]);
		}
		i++;
	}
	va_end(g_ap);
	return (g_counter);
}
