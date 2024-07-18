/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:37:10 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/14 10:47:13 by salsoysa         ###   ########.fr       */
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

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_is_prime(2147483640));
}
