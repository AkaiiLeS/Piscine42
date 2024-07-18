/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:01:29 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/03 17:57:32 by salsoysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	if (i >= n)
		return (0);
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strncmp("Salut ca", "Sahut ca", 35));
}*/
