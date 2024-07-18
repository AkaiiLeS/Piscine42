/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:56:07 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/04 12:56:15 by salsoysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
		str[i - 1] -= 32;
	while (str[i])
	{
		if (!((str[i - 1] <= 'Z' && str[i - 1] >= 'A') \
								|| (str[i - 1] >= '0' && str[i - 1] <= '9') \
								|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
#include <stdio.h>
int	main(void)
{
	char str[100]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
}
