/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:26:07 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/31 16:31:11 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	char *msg = "Hallo ";
// 	char dest[100];
// 	char src[]  = "Filip";
//
// 	stpcpy(dest, msg);
// 	puts(strncat(dest, src, 3));
//
// 	stpcpy(dest, msg);
// 	puts(ft_strncat(dest, src, 3));
// 	
// 	stpcpy(dest, msg);
// 	puts(strncat(dest, src, 10));
//
// 	stpcpy(dest, msg);
// 	puts(ft_strncat(dest, src, 10));
// 	return 0;
// }
