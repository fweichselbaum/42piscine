/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 11:49:06 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/04 21:21:25 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_get(int arr[4][4], int pos)
{
	int	row;
	int	col;

	row = pos / 4;
	col = pos % 4;
	return (arr[row][col]);
}

void	ft_incr(int arr[4][4], int pos)
{
	int	row;
	int	col;

	row = pos / 4;
	col = pos % 4;
	arr[row][col]++;
}

void	ft_erase(int arr[4][4], int *pos)
{
	int	row;
	int	col;

	row = *pos / 4;
	col = *pos % 4;
	arr[row][col] = 0;
	(*pos)--;
}

int	ft_backtrace(int arr[4][4], int constraints[4][4])
{
	int	pos;

	pos = 0;
	while (pos < 16)
	{
		if (ft_get(arr, pos) < 4)
			ft_incr(arr, pos);
		else
		{
			if (pos == 0)
				return (0);
			ft_erase(arr, &pos);
			continue ;
		}
		if (!ft_checkall(arr, constraints, pos))
			continue ;
		pos++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	arr[4][4];
	int	constraints[4][4];

	ft_initarr(arr);
	ft_initarr(constraints); 
	if (argc != 2 || !ft_validate_input(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_getuserinput(argv[1], constraints);
	if (!ft_backtrace(arr, constraints))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_putarr(arr);
	return (0);
}
