/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:21:09 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/08 12:46:37 by fweichse         ###   ########.fr       */
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

void	cpyoffset(char *dest, char *src, int offest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[offest + i] = src[i];
		i++;
	}
}

int	calc_len(int size, char **strs, int seplen)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i == size - 1)
			break ;
		len += seplen;
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	int		offset;
	char	*res;

	i = 0;
	len = calc_len(size, strs, ft_strlen(sep));
	res = (char *) malloc(len + 1);
	if (res == 0)
		return (res);
	i = 0;
	offset = 0;
	while (i < size)
	{
		cpyoffset(res, strs[i], offset);
		offset += ft_strlen(strs[i]);
		if (i == size - 1)
			break ;
		cpyoffset(res, sep, offset);
		offset += ft_strlen(sep);
		i++;
	}
	res[offset] = '\0';
	return (res);
}

// #include <stdio.h>
//
// int main(void)
// {
// 	char	*res;
// 	char	*strs[] = {"Hallo", "du", "kleiner", "Gecko"};
//
// 	res = ft_strjoin(4, strs, "##+#");
// 	puts(res);
// 	free(res);
// 	return (0);
// }
