/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:41:05 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/13 18:44:05 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "libs.h"

t_map	*alloc_map(void)
{
	t_map	*map;

	map = (t_map *) malloc(sizeof(t_map));
	if (!map)
		return (NULL);
	map->rows = 0;
	map->cols = 0;
	map->file_content = NULL;
	map->map = NULL;
	map->empty = 0;
	map->obstacle = 0;
	map->full = 0;
	return (map);
}
