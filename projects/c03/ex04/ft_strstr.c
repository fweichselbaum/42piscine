/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:32:24 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/31 16:40:15 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	printf("%s\n", ft_strstr("Hallo Filip!", "Filip"));
// 	printf("%s\n", ft_strstr("Hallo Filip!", "Filep"));
// 	printf("%s\n", ft_strstr("", "Filip"));
// 	printf("%s\n", ft_strstr("Hallo Filip!", ""));
//
// 	return 0;
// }
