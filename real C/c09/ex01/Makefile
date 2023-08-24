# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 13:21:55 by sasoysal          #+#    #+#              #
#    Updated: 2023/08/23 19:16:28 by sasoysal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_strlen.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strcmp.c
OBJS = ${SRC:.c=.o}
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all : ${NAME}

%.o : %.c
	${CC} ${CFLAGS}  -c $*.c -Iincludes -o $*.o

${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}


clean:
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY: clean fclean re all
