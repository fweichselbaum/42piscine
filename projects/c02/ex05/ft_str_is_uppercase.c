/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:57:55 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/30 16:59:01 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
//
// int main()
// {
// 	printf("%d\n", ft_str_is_uppercase("ASDF"));
// 	printf("%d\n", ft_str_is_uppercase("ASdF"));
// 	printf("%d\n", ft_str_is_uppercase("AS F"));
// }
