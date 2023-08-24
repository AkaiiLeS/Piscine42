/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:17:05 by abdmessa          #+#    #+#             */
/*   Updated: 2023/08/13 18:17:30 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILL_H
# define FILL_H

void	fill_collup(int grid[6][6]);
void	fill_coldowm(int grid[6][6]);
void	fill_rowleft(int grid[6][6]);
void	fill_rowright(int grid[6][6]);
void	fill(int grid[6][6]);

#endif
