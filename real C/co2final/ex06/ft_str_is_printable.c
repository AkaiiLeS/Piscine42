/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:49:51 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/07 19:25:41 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*#include <stdio.h>

int	main(void)
{
	char str[] = "";
	int	tmp = ft_str_is_printable(str);
	printf("%d\n", tmp);
}*/
