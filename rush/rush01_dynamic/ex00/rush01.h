/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 11:45:46 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/04 22:03:28 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H
# include "unistd.h"

typedef int	t_map[9][9];
typedef int	t_con[4][9];

int		ft_validate_input(char *str);
void	ft_getuserinput(char *str, int size, t_con constraints);

void	ft_initarr(t_map arr);
void	ft_putarr(t_map arr, int size);

int		ft_count_row_visible(t_map arr, int size, int row);
int		ft_count_col_visible(t_map arr, int size, int col);
int		ft_count_row_visible_rev(t_map arr, int size, int row);
int		ft_count_col_visible_rev(t_map arr, int size, int col);

int		ft_check_row_dups(t_map arr, int size, int row);
int		ft_check_col_dups(t_map arr, int size, int col);

int		ft_check_row_vis_less(t_map arr, int size, t_con constraints, int row);
int		ft_check_col_vis_less(t_map arr, int size, t_con constraints, int col);
int		ft_check_row_vis(t_map arr, int size, t_con constraints, int row);
int		ft_check_col_vis(t_map arr, int size, t_con constraints, int col);
int		ft_check_row_vis_rev(t_map arr, int size, t_con constraints, int row);
int		ft_check_col_vis_rev(t_map arr, int size, t_con constraints, int col);

int		ft_checkall(t_map arr, int size, t_con constraints, int pos);

#endif
