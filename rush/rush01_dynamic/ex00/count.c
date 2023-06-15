/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:58:41 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/04 14:02:33 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_count_row_visible(t_map arr, int size, int row)
{
	int	count;
	int	max;
	int	i;

	i = 0;
	max = 0;
	count = 0;
	while (i < size)
	{
		if (arr[row][i] > max)
		{
			max = arr[row][i];
			count++;
		}
		if (max == size)
			break ;
		i++;
	}
	return (count);
}

int	ft_count_col_visible(t_map arr, int size, int col)
{
	int	count;
	int	max;
	int	i;

	i = 0;
	max = 0;
	count = 0;
	while (i < size)
	{
		if (arr[i][col] > max)
		{
			max = arr[i][col];
			count++;
		}
		if (max == size)
			break ;
		i++;
	}
	return (count);
}

int	ft_count_row_visible_rev(t_map arr, int size, int row)
{
	int	count;
	int	max;
	int	i;

	i = size - 1;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (arr[row][i] > max)
		{
			max = arr[row][i];
			count++;
		}
		if (max == size)
			break ;
		i--;
	}
	return (count);
}

int	ft_count_col_visible_rev(t_map arr, int size, int col)
{
	int	count;
	int	max;
	int	i;

	i = size - 1;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (arr[i][col] > max)
		{
			max = arr[i][col];
			count++;
		}
		if (max == size)
			break ;
		i--;
	}
	return (count);
}
