/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:00:06 by salsoysa          #+#    #+#             */
/*   Updated: 2024/06/26 11:48:07 by salsoysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char z)
{
	write(1, &z, 1);
}

void	ft_putchar2(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_ponctuation(char a)
{
	if (a != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
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
	while (a < '8' )
	{
		ft_putchar2(a, b, c);
		ft_ponctuation(a);
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
/*
int	main(void)
{
	ft_print_comb();
}*/
