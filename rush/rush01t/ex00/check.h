/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:22:58 by abdmessa          #+#    #+#             */
/*   Updated: 2023/08/13 17:23:04 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H

int	check_colup(int grid[6][6]);
int	check_coldown(int grid[6][6]);
int	check_rowleft(int grid[6][6]);
int	check_rowright(int grid[6][6]);
int	check_views(int grid[6][6]);

#endif
