/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:33:35 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/14 17:42:23 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "functions.h"

int	validate_shape(t_map *map)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(map->map[0]);
	while (i < map->rows)
	{
		if (len != ft_strlen(map->map[i]))
			return (0);
		i++;
	}
	return (1);
}

int	validate_symbols(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->rows)
	{
		j = 0;
		while (map->map[i][j])
		{
			if (map->map[i][j] != map->empty
				&& map->map[i][j] != map->obstacle
				&& map->map[i][j] != map->full)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	validate_map(t_map *map)
{
	return (validate_shape(map) && validate_symbols(map));
}
