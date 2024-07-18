# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/10 13:59:23 by salsoysa          #+#    #+#              #
#    Updated: 2024/07/10 15:24:09 by salsoysa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc -c -Wall -Werror -Wextra ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar -rc libft.a ft_putchar.o ft_swap.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
