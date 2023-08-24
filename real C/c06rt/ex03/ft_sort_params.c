/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:07:58 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/15 11:17:50 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_printstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s2[i] == '\0')
		return (0);
	else
		return (-s2[i]);
}

int	main(int ac, char **av)
{
	int		j;
	int		i;
	char	*tmp;

	i = 0;
	while (++i < ac)
	{
		j = i;
		while (++j < ac)
		{
			if ((ft_strcmp(av[i], av[j]) > 0))
			{
				tmp = av[i];
				av[i] = av[j];
				av[j] = tmp;
			}
		}
	}
	i = 0;
	while (++i < ac)
	{
		ft_printstr(av[i]);
	}
	return (0);
}
