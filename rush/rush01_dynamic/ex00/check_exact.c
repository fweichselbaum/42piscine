/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_exact.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:35:59 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/04 20:17:05 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_check_row_vis(t_map arr, int size, t_con constraints, int row)
{
	return (ft_count_row_visible(arr, size, row) == constraints[2][row]);
}

int	ft_check_col_vis(t_map arr, int size, t_con constraints, int col)
{
	return (ft_count_col_visible(arr, size, col) == constraints[0][col]);
}

int	ft_check_row_vis_rev(t_map arr, int size, t_con constraints, int row)
{
	return (ft_count_row_visible_rev(arr, size, row) == constraints[3][row]);
}

int	ft_check_col_vis_rev(t_map arr, int size, t_con constraints, int col)
{
	return (ft_count_col_visible_rev(arr, size, col) == constraints[1][col]);
}
