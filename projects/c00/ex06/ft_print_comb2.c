/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:49:47 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/29 16:13:05 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_int(int nr)
{
	int	a;
	int	b;
	int	ca;
	int	cb;

	a = nr / 10;
	b = nr % 10;
	ca = '0' + a;
	cb = '0' + b;
	write(1, &ca, 1);
	write(1, &cb, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write_int(a);
			write(1, " ", 1);
			write_int(b);
			b++;
			if (a != 98)
				write(1, ", ", 2);
		}
		a++;
	}
}
// int	main()
// {
// 	ft_print_comb2();
// }
