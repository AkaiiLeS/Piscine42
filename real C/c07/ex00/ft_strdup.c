/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:44:31 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/14 17:30:37 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	src_size;
	int	i;
	char	*str;

	i = 0;
	src_size = 0;
	while (src[src_size])
		src_size++;

	str = (char *)malloc(sizeof (char) * (src_size + 1));
	while (i < src_size)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
