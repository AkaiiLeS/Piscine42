/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:56:51 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/05 15:11:47 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar1(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
}

void	ft_putchar2(char z)
{
	write(1, &z, 1);
}

void	ft_ponctuation(char a)
{
	if (a != '7')
	{
		ft_putchar2(',');
		ft_putchar2(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a < '8')
	{
		ft_putchar1 (a, b, c);
		ft_ponctuation (a);
		c++;
		if (c > '9')
		{
			b++;
			if (b > '8')
			{
				a++;
				b = a + 1;
			}
			c = b + 1;
		}
	}	
}
