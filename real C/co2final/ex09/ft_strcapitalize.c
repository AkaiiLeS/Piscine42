/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:25:49 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/07 19:29:15 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[i -1] >= 'a' && str[i - 1] <= 'z')
		str[i - 1] -= 32;
	while (str[i])
	{
		if (!((str[i - 1] <= 'Z' && str[i - 1] >= 'A') \
					|| (str[i - 1] <= '9' && str[i - 1] >= '0') \
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
/*#include <stdio.h>
int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s\n", str);
}*/
