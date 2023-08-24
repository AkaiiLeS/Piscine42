/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:41:48 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/07 19:21:53 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str [i] <= 'Z'))
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
	int tmp = ft_str_is_uppercase(str);
	printf("%d\n", tmp);
}*/
