/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:48:51 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/10 21:02:28 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size <= dest_size || size == 0)
		return (size + src_size);
	else
	{
		i = 0;
		while (i < size - dest_size - 1 && src[i])
		{
			dest[i + dest_size] = src[i];
			i++;
		}
		dest[dest_size + i] = '\0';
	}
	return (src_size + dest_size);
}
/*#include <stdio.h>

int	main(void)
{
	char *tmp;

	char	dest[] = "Hi";
	char	src[] = "There";
	tmp = ft_strcat(dest, src);
	printf("%s\n", tmp);
}*/
