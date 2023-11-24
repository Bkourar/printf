# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 10:29:22 by bikourar          #+#    #+#              #
#    Updated: 2023/11/24 21:01:20 by bikourar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ft_printf.c ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putstr.c \
	ft_unsigned.c
OBJ = $(FILES:.c=.o)
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

%.o : %.c ft_printf.h
	cc ${CFLAGS} -c $< -o $@

all : ${NAME}

${NAME} : ${OBJ}
	ar rcs ${NAME} ${OBJ}

fclean : clean
	rm -rf ${NAME}

clean :
	rm -rf ${OBJ}

re : fclean all

.PHONY : all re fclean clean