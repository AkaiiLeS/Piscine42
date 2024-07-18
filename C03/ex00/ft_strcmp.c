/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 17:51:44 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/03 11:31:40 by salsoysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
			i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
int	main(void)
{
	char	text[99] = "abca";
	char	tutu[99] = "abc";
	printf("%d\n", ft_strcmp(text, tutu));
}*/
