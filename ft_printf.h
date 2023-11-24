/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:26:56 by bikourar          #+#    #+#             */
/*   Updated: 2023/11/24 22:49:15 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putstr(const char *str, int *j);
void	ft_puthexa(unsigned long n, char format, int *j);
void	ft_putnbr(int n, int *i);
void	ft_putunsigned(unsigned int n, int *i);
void	ft_putchar(char c, int *p);

#endif