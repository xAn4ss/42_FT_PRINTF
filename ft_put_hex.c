/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 01:06:41 by aoukhart          #+#    #+#             */
/*   Updated: 2021/12/07 02:29:43 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hex(unsigned long long n, int cap)
{
	int	x;

	if (cap == 1)
		x = 55;
	else
		x = 87;
	if (n >= 16)
	{
		ft_put_hex((n / 16), cap);
		if ((n % 16) <= 9)
			ft_putchar((n % 16) + 48);
		else if ((n % 16) > 9)
			ft_putchar((n % 16) + x);
	}
	else
	{
		if ((n % 16) <= 9)
			ft_putchar(n + 48);
		else if ((n % 16) > 9)
			ft_putchar(n + x);
	}
}
