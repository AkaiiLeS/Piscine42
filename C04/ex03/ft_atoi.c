/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 12:10:58 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/10 18:49:32 by salsoysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	nb;

	i = 0;
	nb = 0;
	signe = 1;
	while ((str[i] && str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = signe * (-1);
		i++;
	}
	while (str[i] && (str[i] <= '9' && str[i] >= '0'))
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * signe);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_atoi("-123423"));
}
