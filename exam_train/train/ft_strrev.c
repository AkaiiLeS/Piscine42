/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:44:09 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/24 14:02:31 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	*ft_strrev(char *str)
{
	int i;
	int j;
	int len;
	char *temp;

	len = 0;
	while(str[len])
		len++;
	i = 0;
	temp = (char *)malloc(sizeof(char) * len);
	while (str[i])
	{
		temp[i] = str[i];
		i++;
	}
	i--;
	j = 0;
	while (temp[i])
	{
		str[j] = temp[i];
		i--;
		j++;
	}
	str[j] = '\0';
	return (str);
}
#include <stdio.h>
int main (int ac, char **av)
{
	int i = 0;
	if (ac == 2)
		printf("%s", ft_strrev(av[1]));
	printf("\n");
}
