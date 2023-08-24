/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 21:05:50 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/05 16:29:05 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int main()
{
	int a;
	int b;
	int mod;
	int div;

	a = 8;
	b = 3;
	printf("a: %d, b: %d \n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d, mod: %d \n", div, mod); 
}*/
