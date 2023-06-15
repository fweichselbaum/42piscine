/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:20:06 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/06 16:23:32 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}

// #include <stdio.h>
//
// int main(void)
// {
// 	printf("%d\n", ft_recursive_factorial(0));
// 	printf("%d\n", ft_recursive_factorial(1));
// 	printf("%d\n", ft_recursive_factorial(2));
// 	printf("%d\n", ft_recursive_factorial(3));
// 	printf("%d\n", ft_recursive_factorial(4));
// 	printf("%d\n\n", ft_recursive_factorial(5));
// 	printf("%d\n", ft_recursive_factorial(-1));
// 	printf("%d\n", ft_recursive_factorial(-2));
// 	printf("%d\n", ft_recursive_factorial(-3));
// 	return (0);
// }
