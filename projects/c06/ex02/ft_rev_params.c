/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 20:17:24 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/06 20:56:15 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *s)
{
	while (*s)
		write(1, s++, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	while (i >= 1)
	{
		print(argv[i--]);
		write(1, "\n", 1);
	}
	return (0);
}
