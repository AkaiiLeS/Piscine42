/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <abdmessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:24:06 by abdmessa          #+#    #+#             */
/*   Updated: 2023/08/13 19:25:38 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK2_H
# define    CHECK2_H

int	check_pos(int grid[6][6], int x, int y, int nb);
int	next_pos(int pos);
int	check_0(int grid[6][6]);
int	check_40(int grid[6][6]);

#endif
