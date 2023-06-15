/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:18:28 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/30 18:44:57 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (0);
	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i == size)
		i--;
	dest[i] = '\0';
	i = 0;
	while (src[i++] != '\0')
	{
	}
	return (--i);
}
// #include <stdio.h>
// #include <bsd/string.h>
//
// int main(void)
// {
// 	char	buff1[100] = "mega oag";
// 	char	buff2[100];
// 	int	size = 4;
// 	
// 	printf("%lu\n", strlcpy(buff2, buff1, size));
// 	printf("%s\n", buff1);
// 	printf("%s\n", buff2);
// 	printf("%d\n", ft_strlcpy(buff2, buff1, size));
// 	printf("%s\n", buff1);
// 	printf("%s\n", buff2);
// 	return (0);
// }
