/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:36:54 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/23 19:14:36 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	found_sep(char *str, char a)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			return (31);
		i++;
	}
	return (42);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (found_sep(charset, str[i]) == 31 && str[i])
			i++;
		if (found_sep(charset, str[i]) == 42 && str[i])
			count++;
		while (found_sep(charset, str[i]) == 42 && str[i])
			i++;
	}
	return (count);
}

int	ft_strdup_kinda(char **strn, char *str, char *charset, int len)
{
	int	d;
	int	u;
	int	p;

	d = 0;
	u = -1;
	while (++u < len)
	{
		while (found_sep(charset, str[d]) == 31 && str[d])
			d++;
		p = 0;
		while (found_sep(charset, str[d + p]) == 42 && str[d + p])
			p++;
		strn[u] = (char *)malloc(sizeof(char) * (p + 1));
		if (!strn[u])
			return (0);
		p = 0;
		while (found_sep(charset, str[d]) == 42 && str[d])
		{
			strn[u][p++] = str[d];
			d++;
		}
		strn[u][p] = '\0';
	}
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	int		len;
	char	**strn;
	int		i;

	len = count_words(str, charset);
	strn = (char **)malloc(sizeof(char *) * (len + 1));
	if (!strn)
		return (NULL);
	i = 0;
	if (!ft_strdup_kinda(strn, str, charset, len))
		return (NULL);
	strn[len] = NULL;
	return (strn);
}
