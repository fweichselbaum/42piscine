/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:46:45 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/14 17:48:07 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"
#include "map.h"
#include "functions.h"

void	free_all(char **map_arr, int rows)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		if (!map_arr[i])
			break ;
		free(map_arr[i]);
		i++;
	}
	free(map_arr);
}

int	set_map(int fd, t_map *map)
{
	char	**map_arr;
	int		i;

	i = 0;
	map_arr = (char **) malloc(sizeof(char *) * map->rows);
	if (!map_arr)
		return (0);
	while (i < map->rows)
	{
		map_arr[i] = read_first_line(fd);
		if (!map_arr[i])
		{
			free_all(map_arr, map->rows);
			return (0);
		}
		i++;
	}
	map->map = map_arr;
	return (1);
}
