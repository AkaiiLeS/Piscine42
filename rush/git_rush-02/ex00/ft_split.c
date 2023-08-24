/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:58:17 by sguillot          #+#    #+#             */
/*   Updated: 2023/08/19 17:34:59 by sguillot         ###   ########.fr       */
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
	};
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**str2;
	int	i;
	int	j;
	int	counter;

	i = 0;
	j = 0;
	counter = 1;
	if (!str)
		return (0);
	str2 = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	if (!str2)
		return(0);
	while(str[i])
	{
		if (str[i] != *charset)
		{
			str2[j][i] = str[i];
			counter = 1;
		}
		else if (str[i] == *charset && counter == 1)
		{
			str2[j][i] = '\n';
			j++;
			counter = 0;
		}
		i++;		
	}
	str2[j][i] = '\0';
	return (str2);
}

int	main ()
{
	int i = 0;
	int j = 0;
	char str[] = "test,test test";
	char charset = ',';
	char **str2 = ft_split(str, &charset);
	while(str2[i])
	{
		while(str2[i][j])
		{
			write(1, &str2[i][j], 1);
			j++;
		}
		i++;
	}
	free(str2);
}
