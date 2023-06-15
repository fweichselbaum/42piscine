/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:50:41 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/14 20:20:09 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

typedef struct s_map {
	int		rows;
	int		cols;

	char	empty;
	char	obstacle;
	char	full;

	char	**map;

	char	*file_content;

}	t_map;

#endif // !MAP_H
