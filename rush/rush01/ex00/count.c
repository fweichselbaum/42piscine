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

int	ft_count_row_visible(int arr[4][4], int row)
{
	int	count;
	int	max;
	int	i;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (arr[row][i] > max)
		{
			max = arr[row][i];
			count++;
		}
		if (max == 4)
			break ;
		i++;
	}
	return (count);
}

int	ft_count_col_visible(int arr[4][4], int col)
{
	int	count;
	int	max;
	int	i;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (arr[i][col] > max)
		{
			max = arr[i][col];
			count++;
		}
		if (max == 4)
			break ;
		i++;
	}
	return (count);
}

int	ft_count_row_visible_rev(int arr[4][4], int row)
{
	int	count;
	int	max;
	int	i;

	i = 3;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (arr[row][i] > max)
		{
			max = arr[row][i];
			count++;
		}
		if (max == 4)
			break ;
		i--;
	}
	return (count);
}

int	ft_count_col_visible_rev(int arr[4][4], int col)
{
	int	count;
	int	max;
	int	i;

	i = 3;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (arr[i][col] > max)
		{
			max = arr[i][col];
			count++;
		}
		if (max == 4)
			break ;
		i--;
	}
	return (count);
}
