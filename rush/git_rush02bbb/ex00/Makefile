# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 14:33:29 by sasoysal          #+#    #+#              #
#    Updated: 2023/08/20 11:25:08 by sasoysal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = rush-02
CFLAGS = -Wall -Werror -Wextra
SRC = ft_putchar.c ft_strlen.c main.c ft_atoi.c ft_split.c
INC = ft_function.h
OBJ = ${SRC: .c=.o}

all: ${NAME}

%.o : %.c ${INC}
	${CC} ${CFLAGS} -o $@ -c $<

${NAME} : ${OBJ}
	${CC} ${CFLAGS} -o $@ $^

clean:
	rm -f ${ONJ}

fclean:
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean
