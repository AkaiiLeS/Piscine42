/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:33:38 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/09 10:57:04 by salsoysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2147483647)
		return (1);
	i = 1;
	if (nb % 2 == 0 && nb != 2)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0 && i != 1)
			return (0);
		else
			i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
		nb ++;
	return (nb);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_find_next_prime(2147483620));
}*/
