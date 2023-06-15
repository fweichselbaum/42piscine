/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:57:46 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/07 18:30:33 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	m;
	int	flag;

	if (nb <= 1)
		return (0);
	flag = 0;
	m = nb / 2;
	i = 2;
	while (i <= m)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include<stdio.h>
//
// int main(void)
// {
// 	printf("5 -> %d\n", ft_is_prime(5));
// 	printf("0 -> %d\n", ft_is_prime(1));
// 	printf("1 -> %d\n", ft_is_prime(0));
// 	printf("2 -> %d\n", ft_is_prime(2));
// 	printf("6 -> %d\n", ft_is_prime(6));
// 	printf("7 -> %d\n", ft_is_prime(7));
// 	printf("9 -> %d\n", ft_is_prime(9));
// 	printf("11 -> %d\n", ft_is_prime(11));
// 	printf("-6 -> %d\n", ft_is_prime(-6));
// 	printf("-7 -> %d\n", ft_is_prime(-7));
// 	printf("-9 -> %d\n", ft_is_prime(-9));
// 	printf("-11 -> %d\n", ft_is_prime(-11));
// }
