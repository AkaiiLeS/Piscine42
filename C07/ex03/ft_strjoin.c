/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 20:45:31 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/16 12:46:07 by salsoysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_size(int size, char **strs, char *sep)
{
	int	i;
	int	lensep;
	int	len;

	i = 0;
	lensep = ft_strlen(sep);
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += lensep;
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*words;
	int		i;
	int		len;

	i = 0;
	len = ft_size(size, strs, sep) + 1;
	words = malloc(sizeof(char) * len);
	if (!words)
		return (0);
	*words = 0;
	while (i < size)
	{
		ft_strcat(words, strs[i]);
		if (i < size - 1)
			ft_strcat(words, sep);
		i++;
	}
	return (words);
}

#include <stdio.h>
int	main(void)
{
	int	size = 3 ;
	char *strs[] = {"a", "b", "salut", "", "YESSAI"};
	char sep[] = "|--|";

	printf("HmmHmm: %s\n", ft_strjoin(size, strs, sep));
	return (0); 
}
