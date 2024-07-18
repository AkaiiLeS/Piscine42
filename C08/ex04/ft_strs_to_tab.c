/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:17:48 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/14 17:06:41 by salsoysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!str)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strav;
	int			i;

	strav = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(strav))
	{
		return (NULL);
	}
	i = 0;
	while (av[i] && i < ac)
	{
		strav[i].size = ft_strlen(av[i]);
		strav[i].str = av[i];
		strav[i].copy = ft_strdup(av[i]);
		i++;
	}
	strav[i].size = 0;
	strav[i].str = 0;
	strav[i].copy = 0;
	return (strav);
}
