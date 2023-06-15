/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:09:27 by fseles            #+#    #+#             */
/*   Updated: 2023/06/12 17:30:16 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "libs.h"

void	putnstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_map(t_map *pointer)
{
	int	i;

	i = 0;
	while (i < (pointer->rows))
	{
		putnstr(pointer->map[i]);
		write(1, "\n", 1);
		i++;
	}
}
