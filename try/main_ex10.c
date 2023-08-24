/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalbois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:39:59 by bmalbois          #+#    #+#             */
/*   Updated: 2023/08/06 16:40:03 by bmalbois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

#include <stdio.h>

int	main(void)
{
	int	i;

	char dest[] = "Salut";
	char src[] = "Bienvenue";

	printf("src avant : %s \n", src);
	printf("dest avant : %s \n", dest);
	ft_strlcpy(dest, src, 10);
	printf("dest apres : %s \n", dest);
	i = ft_strlcpy(dest, src, 10);
	printf("len de src : %d \n", i);
	printf("src apres : %s \n", src);
	return (0);
}

