/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:58:17 by sguillot          #+#    #+#             */
/*   Updated: 2023/08/20 19:45:07 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**str2;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!str)
		return (0);
	str2 = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	if (!str2)
		return (0);
	str2[j][i] = '\0';
	return (str2);
}
