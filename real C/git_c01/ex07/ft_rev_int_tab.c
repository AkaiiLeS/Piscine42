/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:04:57 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/05 18:41:42 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab [size - 1 - i];
		tab [size - 1 - i] = tmp;
		i++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int	tab[]={1, 2, 3, 4, 5, 6, 7};
	int	size;

	size = 7;
	ft_rev_int_tab(tab, size);
	int i = 0;
	while (tab[i])
	{
		printf("%d ",tab[i]);
		i++;
	}
	return (0);
}*/
