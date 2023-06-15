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

int	ft_check_row_dups(int arr[4][4], int row)
{
	int	i;
	int	j;

	i = 0;
	while (i < 3)
	{
		j = i + 1;
		while (j < 4)
		{
			if (arr[row][i] != 0 && arr[row][i] == arr[row][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_col_dups(int arr[4][4], int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < 3)
	{
		j = i + 1;
		while (j < 4)
		{
			if (arr[i][col] != 0 && arr[i][col] == arr[j][col])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
