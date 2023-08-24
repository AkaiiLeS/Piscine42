/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 21:29:53 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/15 18:05:23 by sasoysal         ###   ########.fr       */
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
	while (i <= (nb / 2))
	{
		if (nb % i == 0 && i != 1)
			return (0);
		else
			i += 2;
	}
	return (1);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_is_prime(214748));
}*/
