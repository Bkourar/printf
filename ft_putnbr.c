/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:38:54 by bikourar          #+#    #+#             */
/*   Updated: 2023/11/24 22:52:29 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *i)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-', i);
		nb = -nb;
	}
	if (nb <= 9)
		ft_putchar((nb + '0'), i);
	else
	{
		ft_putnbr(nb / 10, i);
		ft_putnbr(nb % 10, i);
	}
}
