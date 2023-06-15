/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:17:48 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/31 16:25:02 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	char dest[100] = "Hallo ";
// 	char src[]  = "Filip";
//
// 	puts(ft_strcat(dest, src));
//
// 	return 0;
// }
