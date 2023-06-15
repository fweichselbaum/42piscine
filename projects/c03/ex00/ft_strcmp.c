/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:01:09 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/31 16:31:36 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	printf("%d ",     strcmp("dog", "dog"));
// 	printf("%d\n", ft_strcmp("dog", "dog"));
// 	printf("%d ",     strcmp("do", "dog"));
// 	printf("%d\n", ft_strcmp("do", "dog"));
// 	printf("%d ",     strcmp("dog", "do"));
// 	printf("%d\n", ft_strcmp("dog", "do"));
// 	printf("%d ",     strcmp("hog", "dog"));
// 	printf("%d\n", ft_strcmp("hog", "dog"));
// 	return 0;
// }
