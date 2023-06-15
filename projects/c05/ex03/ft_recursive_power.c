/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:32:51 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/06 16:40:44 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}

// #include <stdio.h>
//
// int main(void)
// {
// 	printf("%d\n", ft_recursive_power(10, 3));
// 	printf("%d\n", ft_recursive_power(10, 0));
// 	printf("%d\n", ft_recursive_power(10, -3));
// 	printf("%d\n", ft_recursive_power(0, 0));
// 	printf("%d\n", ft_recursive_power(-10, 3));
// 	printf("%d\n", ft_recursive_power(-10, 4));
// 	printf("%d\n", ft_recursive_power(1, 1));
// 	printf("%d\n", ft_recursive_power(1, 10));
// 	printf("%d\n", ft_recursive_power(2, 2));
// 	return (0);
// }
