/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:20:46 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/07 19:20:14 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
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
	int tmp = ft_str_is_lowercase(str);
	printf("%d\n", tmp);
	return (0);
}*/
