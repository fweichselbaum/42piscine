/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 23:51:34 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/05 23:51:36 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <stdio.h>
//
// int main(void)
// {
// 	printf("%d\n", ft_strlen(""));	
// 	printf("%d\n", ft_strlen("haha"));	
// 	printf("%d\n", ft_strlen("hasdfhafjlkasjf"));	
// 	return (0);
// }
