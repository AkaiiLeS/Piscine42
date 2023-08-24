/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:37:45 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/15 13:42:07 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = malloc((max - min) * sizeof(int));
	if (!(tab))
		return (0);
	if (min >= max)
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
