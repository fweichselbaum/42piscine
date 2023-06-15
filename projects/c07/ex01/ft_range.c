/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 08:38:07 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/07 08:45:25 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
		return (0);
	arr = (int *) malloc((max - min) * sizeof(int));
	if (!arr)
		return (0);
	i = 0;
	while (arr[i] < max - min)
	{
		arr[i] = i + min;
		i++;
	}
	return (arr);
}

// #include <stdio.h>
//
// int main(void)
// {
// 	int i = 0;
// 	int min = 4;
// 	int max = 10;
// 	int	*arr = ft_range(min, max);
// 	
// 	while (i < max - min)
// 		printf("%d ", arr[i++]);
// 	free(arr);
// 	return (0);
// }
