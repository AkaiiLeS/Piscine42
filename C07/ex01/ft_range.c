/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:12:47 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/13 14:08:31 by salsoysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = NULL;
	if (max <= min)
		return (0);
	tab = malloc((max - min) * sizeof(int));
	if (!(tab))
		return (0);
	i = 0;
	while (max > min)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*#include <stdio.h>
int	main(void)
{
	int	min = -5;
	int	max = 5;
	int	*tab;
	int	i;
	
	tab = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
