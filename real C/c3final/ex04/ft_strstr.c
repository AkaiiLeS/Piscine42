/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:56:25 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/13 10:25:58 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	m;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		m = 0;
		while (str[i + m] == to_find[m] && str[m])
		{
			if (to_find[m + 1] == '\0')
			{
				return (&str[i]);
			}
			m++;
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int    main(void)
{
    char    str[] = "Comment tu peux dire ca tu";
    char    to_find[] = "tus";
    char    str2[] = "Comment tu peux dire ca";
    char    to_find2[] = "fsa";
    char    str3[] = "tu touches pas a Basile";
    char    to_find3[] = "passe";

    printf("%s \n",ft_strstr(str, to_find));
    printf("%s \n",ft_strstr(str2, to_find2));
    printf("%s \n",ft_strstr(str3, to_find3));

    return(0);
}*/
