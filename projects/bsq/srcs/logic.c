/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 22:04:07 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/14 21:46:37 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "libs.h"
#include "functions.h"

int	check_vert(t_map *map, int row, int col, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (map->map[row + i][col] == map->obstacle)
			return (0);
		i++;
	}
	return (1);
}

int	check_horz(t_map *map, int row, int col, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (map->map[row][col + i] == map->obstacle)
			return (0);
		i++;
	}
	return (1);
}

void	fill(t_map *map, int x, int y, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			map->map[x + i][y + j] = map->full;
			j++;
		}
		i++;
	}
}

void	init_max(int *x, int *max_x, int *max_y, int *max_square)
{
	*x = 0;
	*max_x = 0;
	*max_y = 0;
	*max_square = 0;
}

void	find_solution(t_map *map)
{
	int	x;
	int	y;
	int	max_x;
	int	max_y;
	int	max_square;

	init_max(&x, &max_x, &max_y, &max_square);
	while (x < map->rows)
	{
		y = 0;
		while (y < map->cols)
		{
			if (map->map[x][y] != map->obstacle
				&& try_square(map, x, y) > max_square)
			{
				max_square = try_square(map, x, y);
				max_x = x;
				max_y = y;
			}
			y++;
		}
		x++;
	}
	fill(map, max_x, max_y, max_square);
	print_map(map);
}
