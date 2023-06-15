/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:45:30 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/30 21:18:01 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_int_hex(char nr)
{
	unsigned char	unr;
	char			str[8];
	int				i;

	if (nr < 0)
		unr = *(unsigned char *) &nr;
	else
		unr = nr;
	i = 0;
	while (unr)
	{
		str[i] = "0123456789abcdef"[unr % 16];
		unr /= 16;
		i++;
	}
	while (i < 2)
	{
		str[i] = '0';
		i++;
	}
	i--;
	write(1, "\\", 1);
	while (i >= 0)
		write(1, &str[i--], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 20 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			print_int_hex(str[i]);
		i++;
	}
}
// #include <stdio.h>
//
// int main(void)
// {
// 	char test[3] = {97, 10, -97};
// 	// char test[21] = "Coucou\ntu vas bien ?\0";
// 	ft_putstr_non_printable(test);
// 	return 0;
// }
