/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:45:54 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/07 18:06:00 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sub;
	int	count;

	sub = 1;
	count = 0;
	while (nb > 0)
	{
		nb -= sub;
		sub += 2;
		count++;
	}
	if (nb == 0)
		return (count);
	return (0);
}

// #include <stdio.h>
//
// int main(void)
// {
// 	printf("9 -> %d\n", ft_sqrt(9));
// 	printf("25 -> %d\n", ft_sqrt(25));
// 	printf("100 -> %d\n", ft_sqrt(100));
// 	printf("-100 -> %d\n", ft_sqrt(-100));
// 	printf("101 -> %d\n", ft_sqrt(101));
// 	printf("1 -> %d\n", ft_sqrt(1));
// 	printf("2 -> %d\n", ft_sqrt(2));
// 	printf("0 -> %d\n", ft_sqrt(0));
// 	return (0);
// }
