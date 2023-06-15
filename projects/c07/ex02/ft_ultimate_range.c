/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 08:46:22 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/07 08:57:59 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = i + min;
		i++;
	}
	return (max - min);
}

// #include <stdio.h>
//
// int main(void)
// {
// 	int i = 0;
// 	int min = 4;
// 	int max = 10;
// 	int *arr;
//
// 	printf("return %d\n", ft_ultimate_range(&arr, min, max));
// 	while (i < max - min)
// 		printf("%d ", arr[i++]);
// 	free(arr);
// 	return (0);
// }
