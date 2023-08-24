/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 21:08:53 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/14 18:09:09 by sasoysal         ###   ########.fr       */
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
