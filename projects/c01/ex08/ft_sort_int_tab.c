/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:49:13 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/28 17:05:15 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = size;
	while (i > 0)
	{
		j = 0;
		while (j < i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				swap = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = swap;
			}
			j++;
		}
		i--;
	}
}
/*
#include <stdio.h>

int main()
{
	int arr[10] = {4,8,2,0,1,5,7,9,3,6};
	int i = 0;
	
	while (i < 10)
		printf("%d\n", arr[i++]);
	printf("---\n");
	ft_sort_int_tab(arr, 10);
	i = 0;
	while (i < 10)
		printf("%d\n", arr[i++]);
}
*/
