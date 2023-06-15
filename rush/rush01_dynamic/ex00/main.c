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

int	ft_get(t_map arr, int size, int pos)
{
	int	row;
	int	col;

	row = pos / size;
	col = pos % size;
	return (arr[row][col]);
}

void	ft_incr(t_map arr, int size, int pos)
{
	int	row;
	int	col;

	row = pos / size;
	col = pos % size;
	arr[row][col]++;
}

void	ft_erase(t_map arr, int size, int *pos)
{
	int	row;
	int	col;

	row = *pos / size;
	col = *pos % size;
	arr[row][col] = 0;
	(*pos)--;
}

#include <stdio.h>

int	ft_backtrace(t_map arr, int size, t_con constraints)
{
	int	pos;

	pos = 0;
	while (pos < size * size)
	{
		sleep(1);
		ft_putarr(arr, size);
		printf("============ %d %d -> %d\n", pos / size, pos % size, arr[pos/size][pos%size]);

		if (ft_get(arr, size, pos) < size)
		{
			ft_incr(arr, size, pos);
			printf("incr\n");
		}
		else
		{
			if (pos == 0)
				return (0);
			ft_erase(arr, size, &pos);
			printf("erased\n\n");
			continue ;
		}
		if (!ft_checkall(arr, size, constraints, pos))
		{
			printf("check failed\n");
			continue ;
		}
		else 
		{
			printf("all good\n");
		}
		pos++;
	}
	return (1);
}


int	main(int argc, char *argv[])
{
	t_map arr;
	t_con	constraints;
	int	size;

	ft_initarr(arr);
	ft_initarr(constraints);
	if (argc != 2)
	{
		write(1, "1Error\n", 6);
		return (0);
	}
	size = ft_validate_input(argv[1]);
	if (size == 0)
	{
		write(1, "2Error\n", 6);
		return (0);
	}
	printf("size %d\n\n", size);
	ft_getuserinput(argv[1], size, constraints);
	if (!ft_backtrace(arr, size, constraints))
	{
		write(1, "3Error\n", 6);
		return (0);
	}
	ft_putarr(arr, size);
	return (0);
}
