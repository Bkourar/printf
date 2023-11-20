/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:24:04 by bikourar          #+#    #+#             */
/*   Updated: 2023/11/20 20:51:33 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprint.h"

static int	check_format(const char *forma, va_list arg)
{
	int	i;

	i = 0;
	while (forma[i++]) {
		if (forma[i] == '%')
			ft_putchar('%');
		else if (forma[i] == 'c')
			ft_putchar(va_arg(arg, int));
		else if (forma[i] == 's')
			ft_putstr((const char *)va_arg(arg, char *));
		else if (forma[i] == 'd')
			ft_putnbr(va_arg(arg, int));
		else if (forma[i] == 'x')
			ft_putnbrbase((long)va_arg(arg, int), 16);
		else if (forma[i] == 'X')
			ft_putnbrbase((long)va_arg(arg, int), 16);
		else
			ft_putchar(forma[i]);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, format);
	while (format[i]) {
		if (format[i] != '%')
			ft_putchar(format[i]);
		else if (!(check_format((format + i), args)))
			return (-1);
		i++;
	}
	va_end(args);
	return (0);
}
