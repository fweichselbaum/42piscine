/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 08:53:28 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/26 10:50:39 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	start;
	int	end;
	int	i;

	start = 'z';
	i = start;
	end = 'a';
	while (i >= end)
	{
		write(1, &i, 1);
		i--;
	}
}
