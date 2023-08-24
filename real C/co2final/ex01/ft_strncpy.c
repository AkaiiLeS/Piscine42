/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:17:03 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/13 17:23:38 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include <stdio.h>

int	main(void)
{
	char	dest[6] = "coucou";
	char	src[5] = "salut";
	unsigned int	n = 5;

	printf("%s\n", dest);
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
}*/
