/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:24:04 by bikourar          #+#    #+#             */
/*   Updated: 2023/11/24 22:50:57 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static void	check_format(char forma, va_list arg, int *loop)
{
	if (forma == '%')
		ft_putchar('%', loop);
	else if (forma == 'c')
		ft_putchar(va_arg(arg, int), loop);
	else if (forma == 's')
		ft_putstr(va_arg(arg, char *), loop);
	else if (forma == 'd' || forma == 'i')
		ft_putnbr(va_arg(arg, int), loop);
	else if (forma == 'x' || forma == 'X')
		ft_puthexa(va_arg(arg, unsigned int), forma, loop);
	else if (forma == 'u')
		ft_putunsigned(va_arg(arg, unsigned int), loop);
	else if (forma == 'p')
	{
		ft_putstr("0x", loop);
		ft_puthexa(va_arg(arg, unsigned long), forma, loop);
	}
	else
		ft_putchar(forma, loop);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
			ft_putchar(format[i], &count);
		else if (format[i] == '%' && format[i + 1])
		{
			i++;
			check_format(format[i], args, &count);
		}
		else if (format[i] == '%' && format[i + 1])
			break ;
		i++;
	}
	va_end(args);
	return (count);
}

// int main()
// {
// 	printf("%d\n",ft_printf("%d\n", -13535355));
// 	printf("%d\n",printf("%d\n", -13535355));
// }