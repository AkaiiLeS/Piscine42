/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 20:40:27 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/09 20:06:35 by salsoysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write (1, "\n", 1);
}

int	main(int ac, char **av)
{
	while (ac > 1)
	{
		ft_printstr(av[ac - 1]);
		ac--;
	}
}
