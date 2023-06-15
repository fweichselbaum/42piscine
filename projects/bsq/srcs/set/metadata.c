/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   metadata.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:25:17 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/14 14:26:36 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	set_metadata(t_map *map, int rows, char symbols[3])
{
	map->rows = rows;
	map->empty = symbols[0];
	map->obstacle = symbols[1];
	map->full = symbols[2];
}
