/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <abdmessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:21:14 by abdmessa          #+#    #+#             */
/*   Updated: 2023/08/13 19:28:11 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"
#include "check2.h"
#include <unistd.h>

void	backtrack(int grid[6][6], int pos)
{
	int	y;
	int	x;
	int	nb;

	y = pos / 6;
	x = pos % 6;
	if (pos == 99)
		return ;
	if (grid[y][x] != 0)
		backtrack(grid, next_pos(pos));
	else
	{
		nb = 1;
		while (nb <= 4)
		{
			grid[y][x] = nb;
			if ((check_pos(grid, x, y, nb) == 1) && (pos != 99))
				backtrack(grid, next_pos(pos));
			if (check_views(grid) == 1)
				return ;
			nb++;
		}
		grid[y][x] = 0;
	}
}
