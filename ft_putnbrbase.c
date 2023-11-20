/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:38:14 by bikourar          #+#    #+#             */
/*   Updated: 2023/11/20 20:51:27 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"

void	ft_putnbrbase(long nbr, int base)
{
	if (nbr < 0)
		ft_putnbrbase((nbr * -1), base);
	if (nbr >= 0)
	{
		if (nbr > 9)
		{
			ft_putnbrbase((nbr / base), base);
			ft_putnbrbase((nbr % base), base);
		}
		else
			ft_putchar((nbr % base) + '0');
	}
}
