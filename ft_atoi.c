/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:36:42 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/02 03:38:56 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(const char *string)
{
	int		i;
	long	result;
	int		signe;

	i = 0;
	signe = 1;
	result = 0;
	while (string[i] == ' ' || (string[i] >= 9 && string[i] <= 13))
		i++;
	if (string[i] == '-' || string[i] == '+')
	{
		if (string[i] == '-')
			signe *= -1;
		i++;
	}
	while (string[i] >= '0' && string[i] <= '9')
	{
		result = (10 * result) + (string[i] - '0');
		i++;
	}
	if (result > INT_MAX && signe > 0)
		return (2147483648);
	else if (result < INT_MIN && signe < 0)
		return (-2147483649);
	return (signe * result);
}
