/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:37:22 by bikourar          #+#    #+#             */
/*   Updated: 2023/11/24 22:52:59 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int nb, int *i)
{
	if (nb > 9)
	{
		ft_putunsigned((nb / 10), i);
		ft_putunsigned((nb % 10), i);
	}
	else
		ft_putchar((nb + '0'), i);
}
