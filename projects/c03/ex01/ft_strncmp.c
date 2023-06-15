/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:01:09 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/31 16:17:34 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	printf("%d\n", ft_strncmp("dog", "dog", 10));
// 	printf("%d\n", ft_strncmp("do", "dog", 2));
// 	printf("%d\n", ft_strncmp("dog", "do", 3));
// 	printf("%d\n", ft_strncmp("do", "dog", 3));
// 	printf("%d\n", ft_strncmp("hog", "dog", 2));
// 	return 0;
// }
