/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:41:28 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/08 20:39:01 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>
//
// int main(void)
// {
// 	printf("-4044 %d\n", ft_fibonacci(-4044));
// 	printf("-2 %d\n", ft_fibonacci(-2));
// 	printf("-1 %d\n", ft_fibonacci(-1));
// 	printf("0 %d\n", ft_fibonacci(0));
// 	printf("1 %d\n", ft_fibonacci(1));
// 	printf("2 %d\n", ft_fibonacci(2));
// 	printf("3 %d\n", ft_fibonacci(3));
// 	printf("6 %d\n", ft_fibonacci(6));
// 	printf("15 %d\n", ft_fibonacci(15));
// 	return (0);
// }
