/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_param0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:09:20 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/17 09:23:26 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}
int main(int ac, char **av)
{
	(void)ac;
	ft_print(av[0]);
	ft_print("\n");
}
