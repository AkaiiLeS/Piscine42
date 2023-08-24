/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:47:46 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/14 18:40:10 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	total_nb;

	i = 0;
	signe = 1;
	total_nb = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' \
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v' )
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = signe * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total_nb = total_nb * 10 + (str[i] - '0');
		i++;
	}
	return (total_nb * signe);
}
/* *R
#include <stdio.h>
int	main(void)
{
	char	str[] = "   --+-++-+12596ed125";

	printf("%d\n",ft_atoi(str));
	return (0);
}*R */
