/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleodone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:21:17 by mleodone          #+#    #+#             */
/*   Updated: 2023/08/19 18:54:50 by sguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_function.h"

int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		if (ft_atoi(argv[1]) < 0)
		{
			ft_putchar("Error\n");
			return (0);
		}

	}
}
