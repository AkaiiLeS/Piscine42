/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultmitate_div_mod.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:03:50 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/05 18:56:20 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	w;

	w = *a / *b;
	*b = *a % *b;
	*a = w;
}

/*#include <stdio.h>
int	main(void)
{
	int	c;
	int	d;
	int	*a;
	int	*b;

	c = 8;
	d = 3;
	a = &c;
	b = &d;
	printf("%d, %d\n", c, d);
	ft_ultimate_div_mod(a, b);
	printf("%d, %d\n", c, d);
}*/
