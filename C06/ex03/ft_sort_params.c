/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 20:43:00 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/09 23:25:04 by salsoysa         ###   ########.fr       */
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
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int	j = 0;
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
		ft_printstr(av[i]);
	return (0);
}
