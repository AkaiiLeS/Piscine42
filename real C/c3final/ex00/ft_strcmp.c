/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 09:46:49 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/07 12:01:22 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s2[i] == '\0')
		return (0);
	else
		return (-s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strcmp("ABC", "AB "));
	printf("%d\n", ft_strcmp("ABC", "ABZ"));
	printf("%d\n", ft_strcmp("ABC", "ABC"));	
}*/
