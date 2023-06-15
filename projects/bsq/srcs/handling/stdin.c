/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:57:12 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/14 17:58:49 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"
#include "map.h"
#include "functions.h"

void	handle_stdin(void)
{
	int		rows;
	char	symbols[3];

	write(1, "Reading from stdin:\n", 20);
	if (!read_metadata(0, &rows, symbols))
	{
		write(2, "map error\n", 10);
		return ;
	}
	if (!handle_map(0, rows, symbols))
		write(2, "map error\n", 10);
}
