/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:32:11 by salsoysa          #+#    #+#             */
/*   Updated: 2024/06/29 17:40:25 by salsoysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i + 1] < tab[i])
		{
			tmp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = tmp;
			i = 0;
		}
		else
			i++;
	}
}
/*int	main(void)
{
	int test[] = {1,8,2,9,3,5};
	printf("OOOOOkey: %d%d%d%d%d%d\n", test[0], test[1], \
												test[2], test[3], test[4], test[5]);
	ft_sort_int_tab(test, 6);

	int i;

	i = 0;
	while (i < 6)
	{
		printf("Youhou: %d\n", test[i]);
		i++;
	}
	return (0);
}*/
