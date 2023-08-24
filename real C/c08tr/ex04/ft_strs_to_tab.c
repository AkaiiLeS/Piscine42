/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:58:05 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/22 18:45:48 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

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
	int		src_size;
	int		i;
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strav;
	int			i;

	strav = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(strav))
	{
		free(strav);
		return (NULL);
	}	
	i = 0;
	while (av[i] && i < ac)
	{
		strav[i].size = ft_strlen(av[i]);
		strav[i].str = ft_strdup(av[i]);
		strav[i].copy = ft_strdup(strav[i].str);
		i++;
	}
	strav[i].str = 0;
	return (strav);
}
