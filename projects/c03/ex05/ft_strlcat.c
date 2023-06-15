/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:04:29 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/01 10:05:00 by fweichse         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*d;
	char			*s;
	unsigned int	n;
	unsigned int	dlen;

	d = dest;
	s = src;
	n = size;
	while (n-- != 0 && *d)
		d++;
	dlen = d - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}

// #include <stdio.h>
// #include <bsd/string.h>
// #include <string.h>
//
// int main(void)
// {
// 	char *src = " test!";
// 	char dest[500];
// 	size_t size = 4;
//
// 	strcpy(dest, "This is a stupid");
// 	printf("%02lu %s\n", strlcat(dest, src, size), dest);
// 	strcpy(dest, "This is a stupid");
// 	printf("%02u %s\n", ft_strlcat(dest, " test!", size), dest);
// 	
// 	return 0;
// }
