# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 10:29:22 by bikourar          #+#    #+#              #
#    Updated: 2023/11/20 20:50:47 by bikourar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ft_printf.c ft_putchar.c ft_putnbrbase.c ft_putnbr.c ft_putstr.c
OBJ = $(FILES:.c =.o)
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

%.o : %.c libprint.h
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
