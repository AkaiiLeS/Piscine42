/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:06:42 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/14 12:55:19 by salsoysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_index(char c, char *base);
int		ft_atoi_base(char *str, char *base);
int		ft_lenbr(long nbr, int baselen);
char	*ft_putnbr(long nbr, char *base, int size);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_basecheck(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[i])
		return (0);
	j = 0;
	while (base [i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] <= 32 || base[i] > 126)
			return (0);
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (93);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	int		size;
	char	*tot;

	if (!ft_basecheck(base_from) || !ft_basecheck(base_to)
		|| ft_strlen(base_from) <= 1 || ft_strlen(base_to) <= 1)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	size = ft_lenbr(nb, ft_strlen(base_to));
	tot = ft_putnbr(nb, base_to, size);
	return (tot);
}

int	main(int ac, char **av)
{
	#include <stdio.h>
	(void)ac;
	printf("RES: %s\n", ft_convert_base(av[1], av[2], av[3]));
	return (0);
		}
