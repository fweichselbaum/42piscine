/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 17:41:43 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/28 17:49:40 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// #include <stdio.h>
//
// int main()
// {
// 	char str1[]="Sample string";
// 	char str2[40];
// 	
// 	ft_strncpy(str2,str1,5);
// 	puts(str1);
// 	puts(str2);	
//
// 	return (0);
// }
