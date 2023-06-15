/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:14:43 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/07 18:38:05 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	flag;

	if (nb <= 1 || nb % 2 == 0)
		return (0);
	flag = 0;
	i = 2;
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (nb <= 1 || !ft_is_prime(nb))
		nb++;
	return (nb);
}

// #include <stdio.h>
//
// int main(void)
// {
// 	printf("%d\n", ft_find_next_prime(23));
// 	printf("%d\n", ft_find_next_prime(5));
// 	printf("%d\n", ft_find_next_prime(-5));
// 	printf("%d\n", ft_find_next_prime(0));
// 	printf("%d\n", ft_find_next_prime(1));
// 	printf("%d\n", ft_find_next_prime(6));
// 	printf("%d\n", ft_find_next_prime(13));
// 	return (0);
// }
