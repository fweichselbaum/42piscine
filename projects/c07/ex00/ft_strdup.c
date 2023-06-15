/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 08:29:26 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/07 08:37:28 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*cpy;

	len = ft_strlen(src);
	cpy = (char *) malloc(len + 1);
	if (!cpy)
		return (0);
	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

// #include <stdio.h>
//
// int main(void)
// {
// 	char *msg = "Hallo servus";
// 	char *cpy = ft_strdup(msg);
// 	printf("msg = %p, cpy = %p\n", msg, cpy);
// 	printf("msg = %s, cpy = %s\n", msg, cpy);
// 	free(cpy);
// 	return (0);
// }
