/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 17:31:23 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/28 17:39:20 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
//
// int main()
// {
// 	char src[]="Sample string";
// 	char dest[40];
// 	
// 	ft_strcpy (dest, src);
// 	puts(src);
// 	puts(dest);
// }
