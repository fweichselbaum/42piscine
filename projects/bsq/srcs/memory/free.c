/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:14:19 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/12 17:28:16 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"
#include "map.h"

void	free_map(t_map *map)
{
	int	i;

	i = 0;
	if (!map)
		return ;
	if (map->file_content)
		free(map->file_content);
	if (map->map)
	{
		while (i < map->rows)
		{
			if (!map->map[i])
				break ;
			free (map->map[i]);
			i++;
		}
		free(map->map);
	}
	free(map);
}
