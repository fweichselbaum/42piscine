/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:55:52 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/14 17:55:56 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"
#include "map.h"
#include "functions.h"

int	handle_map(int fd, int rows, char symbols[3])
{
	t_map	*map;

	map = alloc_map();
	if (!map)
	{
		return (0);
	}
	set_metadata(map, rows, symbols);
	if (!set_map(fd, map) || !validate_map(map))
	{
		free_map(map);
		return (0);
	}
	map->cols = ft_strlen(map->map[0]);
	find_solution(map);
	free_map(map);
	return (1);
}
