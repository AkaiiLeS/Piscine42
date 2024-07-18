/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 23:52:27 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/03 12:09:34 by salsoysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	m;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		m = 0;
		while (str[i + m] == to_find[m] && str[i + m])
		{
			if (to_find[m + 1] == '\0')
				return (&str[i]);
			m++;
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main (int ac, char **av)
{
	if	(ac != 3)
		return (1);
	else
	{
		printf("%s\n", ft_strstr(av[1], av[2]));
	}
}*/
