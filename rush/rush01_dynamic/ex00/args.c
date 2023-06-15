/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezolfag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:14:36 by hezolfag          #+#    #+#             */
/*   Updated: 2023/06/04 11:39:47 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_getuserinput(char *str, int size, t_con constraints)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (counter < size * size)
	{
		if (counter < size * 1)
			constraints[0][counter % size] = str[i] - '0';
		else if (counter < size * 2)
			constraints[1][counter % size] = str[i] - '0';
		else if (counter < size * 3)
			constraints[2][counter % size] = str[i] - '0';
		else
			constraints[3][counter % size] = str[i] - '0';
		i += 2;
		counter++;
	}
}
