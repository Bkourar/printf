/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:38:54 by bikourar          #+#    #+#             */
/*   Updated: 2023/11/20 20:51:54 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"

void	ft_putnbr(int n)
{
	long	nb;

	nb = (long)n;
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else 
	{
		if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr((nb * -1));
		}
		else if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
			ft_putchar((nb + '0'));
	}
}
