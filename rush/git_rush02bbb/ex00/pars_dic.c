/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_dic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:22:19 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/20 11:12:23 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_function.h"

int	ft_size(int i)
{
	int	fd;
	int	size;
	char	buffer;

	size = 0;
	if((fd = open("numbers.dict", O_RDONLY)) == -1)
		return (0);
	while (i-- > 0)
		read(fd, &buffer, 1);
	while (read(fd, &buffer, 1) && buffer == ' ')
		;
	read(fd, &buffer, 1);
	while (read(fd, &buffer, 1) && buffer == ' ')
		;
	while (read(fd, &buffer, 1) && buffer != '\n')
		size++;
	return (size);
}

void	ft_newline(int *fd, int *i)
{
	int	nwl;
	char	buffer;

	nwl = 0;
	while (read(*fd, &buffer, 1) && != (nwl))
	{
		if (buffer == '\n')
			nwl = 1;
	}
	*i = 0;
}

char	*ft_parse_dic(char *str)
{
	char	buffer;
	char *o;
	int	fd;
	int	i;

	if ((fd = open("numbers.dict", O_RDONLY)) == -1)
		return (0);
	i = 0;
	while (read(fd, &buffer, 1))
	{
		if (str[i] != buffer && str[i] != '\0')
			ft_newline(&fd, &i);
	}
	i++;
}

// didn't finish the parse_dic function, we nead a function to skip white spaces, and a function to copy words in our buffer, so at least 2 functions missing//
