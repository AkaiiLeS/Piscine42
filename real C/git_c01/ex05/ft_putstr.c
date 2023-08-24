/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasoysal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:44:42 by sasoysal          #+#    #+#             */
/*   Updated: 2023/08/05 18:59:17 by sasoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	b;

	b = 0;
	while (str[b])
	{
		ft_putchar(str[b]);
		b++;
	}
}

/*int	main()
{
	char	str[25]="hello";
	ft_putstr(str);
	return (0);
}*/
