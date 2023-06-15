/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 23:51:23 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/05 23:51:55 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int			i;
	char		digits[10];
	long long	lnb;

	i = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	lnb = (long long) nb;
	if (lnb < 0)
	{
		write(1, "-", 1);
		lnb = -lnb;
	}
	while (lnb > 0)
	{
		digits[i++] = (lnb % 10) + '0';
		lnb /= 10;
	}
	while (--i >= 0)
		write(1, digits + i, 1);
}

// int main(void)
// {
// 	ft_putnbr(0);
// 	write(1, "\n", 1);
// 	ft_putnbr(3030);
// 	write(1, "\n", 1);
// 	ft_putnbr(-3030);
// 	write(1, "\n", 1);
// 	ft_putnbr(2147483647);
// 	write(1, "\n", 1);
// 	ft_putnbr(-2147483648);
// 	write(1, "\n", 1);
// 	return (0);
// }
