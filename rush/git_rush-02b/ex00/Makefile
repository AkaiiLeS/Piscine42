# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 14:33:29 by sasoysal          #+#    #+#              #
#    Updated: 2023/08/19 19:29:11 by sasoysal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
EXEC = rush-02
CFLAGS = -Wall -Werror -Wextra
SRC = ft_putchar.c ft_strlen.c main.c ft_atoi.c ft_parse.c ft_split.c
INC = ft_function.h
OBJ = ${SRC: .c=.o}

all: ${EXEC}

%.o : %.c ${INC}
	${CC} ${CFLAGS} -o $@ -c $<

${EXEC} : ${OBJ}
	${CC} ${CFLAGS} -o $@ $^

clean:
	rm -f ${ONJ}

fclean:
	rm -f ${EXEC}

re: fclean all

.PHONY: all clean fclean
