/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:56:52 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/30 16:56:53 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
//
// int main()
// {
// 	printf("%d\n", ft_str_is_numeric("132887"));
// 	printf("%d\n", ft_str_is_numeric("123 48"));
// 	printf("%d\n", ft_str_is_numeric("391ll1"));
// }
