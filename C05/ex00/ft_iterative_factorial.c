/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 21:00:37 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/02 21:12:32 by salsoysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factor;

	i = 1;
	factor = 1;
	if (nb == 0)
		return (factor);
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		factor = i * factor;
		i++;
	}
	return (factor);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
}*/
