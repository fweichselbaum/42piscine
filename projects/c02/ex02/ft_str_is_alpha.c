/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:45:15 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/30 16:46:50 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	is_lower;
	int	is_upper;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		is_lower = (str[i] >= 'a' && str[i] <= 'z');
		is_upper = (str[i] >= 'A' && str[i] <= 'Z');
		if (!(is_lower || is_upper))
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
//
// int main(void)
// {
// 	printf("%d\n", ft_str_is_alpha("Hello"));
// 	printf("%d\n", ft_str_is_alpha("H llo"));
// 	printf("%d\n", ft_str_is_alpha("He11o"));
// }
