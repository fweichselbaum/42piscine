/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:54:29 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/14 19:25:37 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"
#include "map.h"
#include "functions.h"

void	handle_file(char *file)
{
	int		rows;
	char	symbols[3];
	int		fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(2, "map error\n", 10);
		return ;
	}
	if (!read_metadata(fd, &rows, symbols))
	{
		write(2, "map error\n", 10);
		close(fd);
		return ;
	}
	if (!handle_map(fd, rows, symbols))
	{
		write(2, "map error\n", 10);
	}
	close(fd);
}
