/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 11:45:46 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/04 20:22:36 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include "unistd.h"

void	ft_initarr(int arr[4][4]);
void	ft_putarr(int arr[4][4]);

int		ft_validate_input(char *str);
void	ft_getuserinput(char *str, int constr[4][4]);

int		ft_count_row_visible(int arr[4][4], int row);
int		ft_count_col_visible(int arr[4][4], int col);
int		ft_count_row_visible_rev(int arr[4][4], int row);
int		ft_count_col_visible_rev(int arr[4][4], int col);

int		ft_check_row_dups(int arr[4][4], int row);
int		ft_check_col_dups(int arr[4][4], int col);

int		ft_check_row_vis_less(int arr[4][4], int constraints[4][4], int row);
int		ft_check_col_vis_less(int arr[4][4], int constraints[4][4], int col);
int		ft_check_row_vis(int arr[4][4], int constraints[4][4], int row);
int		ft_check_col_vis(int arr[4][4], int constraints[4][4], int col);
int		ft_check_row_vis_rev(int arr[4][4], int constraints[4][4], int row);
int		ft_check_col_vis_rev(int arr[4][4], int constraints[4][4], int col);

int		ft_checkall(int arr[4][4], int constraints[4][4], int pos);

#endif
