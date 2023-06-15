/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:11:21 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/07 21:00:44 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(int guess[10], int row, int col)
{
	int	r;

	r = 0;
	while (r < row)
	{
		if (guess[r] == col
			|| guess[r] + r == col + row
			|| guess[r] - r == col - row)
			return (0);
		r++;
	}
	return (1);
}

void	print(int guess[10])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = guess[i++] + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

void	init(int guess[10])
{
	int	i;

	i = 0;
	while (i < 10)
		guess[i++] = -1;
}

void	handle_correct(int guess[10], int *row, int *count)
{
	if (*row == 9)
	{
		print(guess);
		(*count)++;
	}
	else
		(*row)++;
}

int	ft_ten_queens_puzzle(void)
{
	int	count;
	int	guess[10];
	int	row;

	row = 0;
	count = 0;
	init(guess);
	while (row < 10)
	{
		if (guess[row] < 9)
			guess[row]++;
		else
		{
			if (row == 0)
				return (count);
			guess[row--] = -1;
			continue ;
		}
		if (check(guess, row, guess[row]))
			handle_correct(guess, &row, &count);
	}
	return (0);
}

// #include <stdio.h>
//
// int main(void)
// {
// 	printf("\n\nsolutions => %d", ft_ten_queens_puzzle());
// 	return (0);
// }
