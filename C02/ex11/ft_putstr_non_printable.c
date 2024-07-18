/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salsoysa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:26:31 by salsoysa          #+#    #+#             */
/*   Updated: 2024/07/03 17:38:22 by salsoysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char h)
{
	write(1, &h, 1);
}

void	ft_hexa(unsigned char u)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[u / 16]);
	ft_putchar(hex[u % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			write(1, "\\", 1);
			ft_hexa(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}

int	main(void)
{
	char	tfou[] = "Coucou\0tu vas bien ?";
	ft_putstr_non_printable(tfou);
	//printf("yolo: %s\n", tfou);
	return (0);
}
