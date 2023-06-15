/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:57:13 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/30 16:57:35 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
//
// int main()
// {
// 	printf("%d\n", ft_str_is_lowercase("asdf"));
// 	printf("%d\n", ft_str_is_lowercase("Asdf"));
// 	printf("%d\n", ft_str_is_lowercase("as f"));
// }
