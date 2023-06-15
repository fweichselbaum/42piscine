/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:17:38 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/14 20:17:59 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "functions.h"

int	max_possible_square(t_map *map, int row, int col)
{
	int	col_left;
	int	row_left;

	col_left = map->cols - col;
	row_left = map->rows - row;
	if (col_left < row_left)
		return (col_left);
	return (row_left);
}

int	try_square(t_map *map, int row, int col)
{
	int	size;

	size = 1;
	while (size <= max_possible_square(map, row, col)
		&& check_vert(map, row, col + size - 1, size)
		&& check_horz(map, row + size - 1, col, size))
		size++;
	return (size - 1);
}
