/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:38:14 by bikourar          #+#    #+#             */
/*   Updated: 2023/11/24 22:52:13 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned long n, char format, int *j)
{
	char	*lw_hex;
	char	*up_hex;

	lw_hex = "0123456789abcdef";
	up_hex = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthexa((n / 16), format, j);
	if (format == 'X')
		ft_putchar(up_hex[(n % 16)], j);
	else if (format == 'x' || format == 'p')
		ft_putchar(lw_hex[(n % 16)], j);
}
