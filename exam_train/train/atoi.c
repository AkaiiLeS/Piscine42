/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:59:56 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/24 10:27:18 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int result;
	int neg;
	
	i = 0;
	result = 0;
	neg = 1;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == 32) 
		i++;
	if (str[i] == '-'  || str[i] == '+')
		{
			if (str[i] == '-')
				neg = -1;
			i++;
		}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * neg);
}
#include <stdio.h>
int main(int ac, char **av)
{
	printf("%d\n", ft_atoi(av[1]));
}
