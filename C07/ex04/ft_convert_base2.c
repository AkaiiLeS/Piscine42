/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:51:20 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/10 20:29:12 by salsoysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_basecheck(char *str);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	ft_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{	
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-93);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	signe;

	if (ft_basecheck(base) != 93 || ft_strlen(base) < 2)
		return (0);
	i = 0;
	nb = 0;
	signe = 1;
	while ((str[i] && str[i] == 32) || (str[i] <= 13 && str[i] >= 9))
		i++;
	while ((str[i] && str[i] == '-') || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] && ft_index(str[i], base) >= 0)
	{
		nb = nb * ft_strlen(base) + ft_index(str[i], base);
		i++;
	}
	return (nb * signe);
}

int	ft_lenbr(long nbr, int baselen)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr > 0)
	{
		nbr /= baselen;
		i++;
	}
	return (i);
}

char	*ft_putnbr(long nbr, char *base, int size)
{
	char	*tot;
	int		i;

	i = 0;
	tot = malloc(sizeof(char) * (size + 1));
	if (nbr == 0)
		tot[0] = base[nbr % ft_strlen(base)];
	if (!tot)
		return (0);
	if (nbr < 0)
	{
		tot[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		tot[(size - 1) - i] = base[nbr % ft_strlen(base)];
		nbr /= ft_strlen(base);
		i++;
	}
	tot[size] = '\0';
	return (tot);
}
