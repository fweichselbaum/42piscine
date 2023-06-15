/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:49:13 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/28 16:58:50 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swap;
		i++;
	}
}
/*
#include <stdio.h>

int main()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int i = 0;
	
	while (i < 10)
		printf("%d\n", arr[i++]);
	printf("---\n");
	ft_rev_int_tab(arr, 10);
	i = 0;
	while (i < 10)
		printf("%d\n", arr[i++]);
}
*/
