/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:55:36 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/26 10:49:47 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	start;
	int	end;
	int	i;

	start = 'a';
	end = 'z';
	i = start;
	while (i <= end)
	{
		write(1, &i, 1);
		i++;
	}
}
