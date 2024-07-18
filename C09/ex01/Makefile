# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/10 15:27:43 by salsoysa          #+#    #+#              #
#    Updated: 2024/07/16 10:23:25 by salsoysa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_strlen.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strcmp.c
OBJS = ${SRC:.c=.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror

all : ${NAME}

%.o : %.c
		${CC} ${CFLAGS} -c $*.c -Iincludes -o $*.o

${NAME} : ${OBJS}
		ar rcs ${NAME} ${OBJS}

clean:
		rm -f ${OBJS}

flcean : clean
		rm -f ${NAME}

re : fclean all

.PHONY: clean fclean re all
