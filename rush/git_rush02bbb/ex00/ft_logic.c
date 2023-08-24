/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:57:00 by sguillot          #+#    #+#             */
/*   Updated: 2023/08/19 20:05:08 by sguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_function.h"
#include <stdio.h>

void	ft_logic(int nb)
{
	if (ft_intlen(nb) % 3 == 0)
	{
		printf("1");
	}
	else if ((ft_intlen(nb) + 1) % 3 == 0)
	{
	       printf("%d", nb);
	}
	else if ((ft_intlen(nb) + 2) % 3 == 0)
	{
		printf("%d", nb);
	}
}
