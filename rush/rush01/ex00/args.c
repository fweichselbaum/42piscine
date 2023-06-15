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

void	ft_getuserinput(char *str, int constr[4][4])
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (counter < 16)
	{
		if (counter < 4)
			constr[0][counter % 4] = str[i] - '0';
		else if (counter < 8)
			constr[1][counter % 4] = str[i] - '0';
		else if (counter < 12)
			constr[2][counter % 4] = str[i] - '0';
		else
			constr[3][counter % 4] = str[i] - '0';
		i += 2;
		counter++;
	}
}
