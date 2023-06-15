/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:08:18 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/30 17:08:25 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
//
// int main()
// {
// 	printf("%d\n", ft_str_is_printable("adf 123 /!?"));
// 	printf("%d\n", ft_str_is_printable("123 \t fja"));
// }
