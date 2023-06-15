/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_less.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:16:24 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/04 20:16:52 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_check_row_vis_less(int arr[4][4], int constraints[4][4], int row)
{
	return (ft_count_row_visible(arr, row) <= constraints[2][row]);
}

int	ft_check_col_vis_less(int arr[4][4], int constraints[4][4], int col)
{
	return (ft_count_col_visible(arr, col) <= constraints[0][col]);
}
