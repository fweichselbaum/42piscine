/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:04:57 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/04 14:05:19 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_check_row_dups(t_map arr, int size, int row)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[row][i] != 0 && arr[row][i] == arr[row][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_col_dups(t_map arr, int size, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i][col] != 0 && arr[i][col] == arr[j][col])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
