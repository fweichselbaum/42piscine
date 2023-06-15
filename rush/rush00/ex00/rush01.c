/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 10:40:51 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/27 15:26:36 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if ((i == 0 && j == 0) || (i == x - 1 && j == y - 1))
				ft_putchar('/');
			else if ((i == 0 && j == y - 1) || (i == x - 1 && j == 0))
				ft_putchar('\\');
			else if (i == 0 || j == 0 || i == x - 1 || j == y - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
