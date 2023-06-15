/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:19:57 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/04 20:23:35 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <stdio.h>

int	ft_checkall(t_map arr, int size, t_con constraints, int pos)
{
	if (!ft_check_row_dups(arr, size, pos / size) || !ft_check_col_dups(arr, size, pos % size))
		return (0);
	/*if (!ft_check_row_vis_less(arr, size, constraints, pos / size)
		|| !ft_check_col_vis_less(arr, size, constraints, pos % size))
		return (0);*/
	if (pos % size == (size - 1) && (!ft_check_row_vis(arr, size, constraints, pos / size)
			|| !ft_check_row_vis_rev(arr, size, constraints, pos / size)))
		return (0);
	if (pos / size == (size - 1) && (!ft_check_col_vis(arr, size, constraints, pos % size)
			|| !ft_check_col_vis_rev(arr, size, constraints, pos % size)))
		return (0);
	return (1);
}
