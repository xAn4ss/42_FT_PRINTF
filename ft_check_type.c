/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 02:17:34 by aoukhart          #+#    #+#             */
/*   Updated: 2021/12/02 00:43:41 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_type(char c, va_list ap, int g_counter)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, int));
	if (c == 's')
		ft_putstr(va_arg(ap, char *));
	if (c == '%')
		ft_putchar('%');
	if (c == 'd' || c == 'i')
		ft_put_int(va_arg(ap, int));
	if (c == 'u')
		ft_put_int(va_arg(ap, unsigned int));
	if (c == 'X')
		ft_put_hex(va_arg(ap, unsigned int), 1);
	if (c == 'x')
		ft_put_hex(va_arg(ap, unsigned int), 0);
	if (c == 'p')
	{
		ft_putstr("0x");
		ft_put_hex(va_arg(ap, unsigned long), 0);
	}
	return (g_counter);
}
