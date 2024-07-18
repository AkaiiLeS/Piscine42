/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:06:56 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/16 12:33:27 by salsoysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		src_size;
	int		i;
	char	*str;

	i = 0;
	src_size = 0;
	while (src[src_size])
		src_size++;
	str = (char *)malloc(sizeof (char) * (src_size + 1));
	if (!str)
		return (0);
	while (i < src_size)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char *test;

	test = "Yo le gang";
	printf("%s\n", ft_strdup(test));
}*/
