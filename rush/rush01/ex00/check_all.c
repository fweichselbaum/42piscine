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

int	ft_checkall(int arr[4][4], int constraints[4][4], int pos)
{
	if (!ft_check_row_dups(arr, pos / 4) || !ft_check_col_dups(arr, pos % 4))
		return (0);
	if (!ft_check_row_vis_less(arr, constraints, pos / 4)
		|| !ft_check_col_vis_less(arr, constraints, pos % 4))
		return (0);
	if (pos % 4 == 3 && (!ft_check_row_vis(arr, constraints, pos / 4)
			|| !ft_check_row_vis_rev(arr, constraints, pos / 4)))
		return (0);
	if (pos / 4 == 3 && (!ft_check_col_vis(arr, constraints, pos % 4)
			|| !ft_check_col_vis_rev(arr, constraints, pos % 4)))
		return (0);
	return (1);
}
