/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:07:25 by sguillot          #+#    #+#             */
/*   Updated: 2023/08/19 13:38:41 by sguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#include <numbers.dict>

void	ft_parse ()
{
	FILE *file = fopen("numbers.dict", r);

	if (file == NULL)
	{
		write(1, "Can't open numbers.dict\n", 24);
		return (0);
	}
	while ()
}
