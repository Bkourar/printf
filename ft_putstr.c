/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:48:21 by bikourar          #+#    #+#             */
/*   Updated: 2023/11/24 22:52:52 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *str, int *j)
{
	int	i;

	i = 0;
	if (!str)
	{
		*j += write(1, "(null)", 6);
		return ;
	}
	while (str[i])
	{
		ft_putchar(str[i], j);
		i++;
	}
}
