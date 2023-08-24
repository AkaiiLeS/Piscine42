/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:18:09 by abdmessa          #+#    #+#             */
/*   Updated: 2023/08/13 18:18:13 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERATE_H
# define GENERATE_H

void	ft_putchar(char c);
int		ft_strlen(char *str);
int		check_args(char *args);
void	init_table(int grid[6][6], char *args);
void	aff_grid(int grid[6][6]);

#endif
