/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:45:15 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/07 19:30:43 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src [i])
		i++;
	return (i);
}
/*#include <stdio.h>

int     main(void)
{
        int     i;

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
}*/
