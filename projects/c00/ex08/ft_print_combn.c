/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 08:31:15 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/28 11:07:20 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init_arr(int *arr, int n)
{
	int	i;
	int	val;

	i = 10 - n;
	val = '0';
	while (i < 10)
	{
		arr[i++] = val++;
	}
}

void	print_arr(int *arr, int n)
{
	int	i;

	i = 10 - n;
	while (i < 10)
	{
		write(1, &arr[i++], 1);
	}
	write(1, ", ", 2);
}

void	incr_arr(int *arr, int *elem)
{
	arr[*elem]++;
	(*elem)++;
	while (*elem <= 9)
	{
		arr[*elem] = arr[*elem - 1];
		if (*elem != 9)
		{
			arr[*elem]++;
		}
		(*elem)++;
	}
	*elem = 9;
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	elem;

	elem = 9;
	if (n <= 0 || n >= 10)
		return ;
	init_arr(arr, n);
	print_arr(arr, n);
	while (arr[10 - n] <= '9' - n + 1)
	{
		while (arr[elem] < '9')
		{
			arr[elem]++;
			print_arr(arr, n);
		}
		while (arr[elem] == '0' + elem)
		{
			elem--;
			if (elem < 10 - n)
				return ;
		}
		incr_arr(arr, &elem);
	}
}

int main(void)
{
	ft_print_combn(2);
	return 0;
}
