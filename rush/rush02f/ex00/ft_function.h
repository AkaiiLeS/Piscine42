/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:37:03 by sguillot          #+#    #+#             */
/*   Updated: 2023/08/20 18:54:38 by mleodone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FUNCTION_H
# define FT_FUNCTION_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_logic(int nb);
int		ft_intlen(int nb);
void	ft_putchar(char c);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_rev_int_tab(int *tab, int size);
// char	**ft_split(char *str, char *charset);
#endif
