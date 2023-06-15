/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marondon <marondon@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 11:36:53 by marondon          #+#    #+#             */
/*   Updated: 2023/06/03 12:36:33 by marondon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putarr(int arr[4][4])
{
	int	row;
	int	col;
	int	a;

	row = 0;
	col = 0;
	while (row < 4)
	{
		while (col < 4)
		{
			a = arr[row][col] + '0';
			write(1, &a, 1);
			if (col < 3)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			col++;
		}
		col = 0;
		row++;
	}
}
/*
int main()
{
	int arr[4][4] =
	{
		{1, 2, 3, 4},
		{2, 3, 4, 1},
		{3, 4, 1, 2},
		{4, 1, 2, 3},
	};

	ft_putarr(arr);
}
- I can also write **arr since its a bidimensional array, or I can write
arr[][]
- I convert int to char (ASCII) by adding +48 or '0'
- For each row I write, I have to reset my column to start in row++
and colum 0*/
