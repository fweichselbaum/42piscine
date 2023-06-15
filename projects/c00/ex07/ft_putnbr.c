/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:44:02 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/28 11:07:04 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_first_div(int nb)
{
	int	divisor;
	int	maxint;

	divisor = 1;
	maxint = 2147483647;
	while (divisor * 10L < maxint && divisor * 10 < nb)
	{
		divisor *= 10;
	}
	return (divisor);
}

void	ft_putnbr(int nb)
{
	int	divisor;
	int	ch;
	int	mod;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	divisor = get_first_div(nb);
	mod = 10;
	while (1)
	{
		ch = ((nb / divisor) % mod) + '0';
		write(1, &ch, 1);
		if (divisor == 1)
			break ;
		divisor /= 10;
	}
}
