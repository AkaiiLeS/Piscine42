/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleodone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:21:17 by mleodone          #+#    #+#             */
/*   Updated: 2023/08/19 19:23:56 by sguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_function.h"

int	main(int argc, char **argv)
{
	int	i;
	int	nb;

	i = 0;
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		if (nb < 0)
		{
			ft_putstr('Error\n');
			return (0);
		}
		else
		{
			ft_rev_int_tab(&nb, ft_intlen(nb));
			ft_logic(nb);
		}
	}
	return (0);
}
