/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <abdmessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:18:28 by abdmessa          #+#    #+#             */
/*   Updated: 2023/08/13 19:29:53 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "backtracking.h"
#include "check.h"
#include "fill.h"
#include "generate.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	static int	grid[6][6] = {0};
	int			pos;

	pos = 7;
	if (argc == 2)
	{
		if (check_args(argv[1]) == 1)
		{
			init_table(grid, argv[1]);
			fill(grid);
			backtrack(grid, pos);
			if (check_views(grid) == 1)
			{
				aff_grid(grid);
				return (0);
			}
			else
				write(2, "Error no combining\n", 19);
		}
		else
			write(2, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
}
