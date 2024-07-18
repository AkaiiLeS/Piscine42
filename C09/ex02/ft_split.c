/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:13:51 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/17 13:34:49 by salsoysa         ###   ########.fr       */
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
	return (93);
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
		if (found_sep(charset, str[i]) == 93 && str[i])
			count++;
		while (found_sep(charset, str[i]) == 93 && str[i])
			i++;
	}
	return (count);
}

int	ft_strdup(char **strn, char *str, char *charset, int len)
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
		while (found_sep(charset, str[d + p]) == 93 && str[d + p])
			p++;
		strn[u] = (char *)malloc(sizeof(char) * (p + 1));
		if (!strn[u])
			return (0);
		p = 0;
		while (found_sep(charset, str[d]) == 93 && str[d])
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
	if (!ft_strdup(strn, str, charset, len))
		return (NULL);
	strn[len] = NULL;
	return (strn);
}
/*#include <stdio.h>
int	main(void)
{
		char str[] = "Je|suis,au bout, de-ma vie";
		char charset[] = "";
		char **res;
		int	i;

		res = ft_split(str, charset);
		i = 0;
		while (res[i])
		{
				printf("i %d: %s\n", i, res[i]);
				i++;
		}
		return (0);
}
*/
