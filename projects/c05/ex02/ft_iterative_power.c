/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:24:37 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/06 16:32:28 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	res = nb;
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}

// #include <stdio.h>
//
// int main(void)
// {
// 	printf("%d\n", ft_iterative_power(10, 3));
// 	printf("%d\n", ft_iterative_power(10, 0));
// 	printf("%d\n", ft_iterative_power(10, -3));
// 	printf("%d\n", ft_iterative_power(0, 0));
// 	printf("%d\n", ft_iterative_power(-10, 3));
// 	printf("%d\n", ft_iterative_power(-10, 4));
// 	printf("%d\n", ft_iterative_power(1, 1));
// 	printf("%d\n", ft_iterative_power(1, 10));
// 	printf("%d\n", ft_iterative_power(2, 2));
// 	return (0);
// }
