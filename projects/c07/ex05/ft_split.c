/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:01:55 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/12 13:28:08 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (in_word && is_in_charset(*str, charset))
			in_word = 0;
		else if (!in_word && !is_in_charset(*str, charset))
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

int	next_wd(char *str, char *charset, int offset, char *cpydest)
{
	int	i;

	i = 0;
	if (cpydest)
	{
		while (str[offset] && !is_in_charset(str[offset], charset))
			cpydest[i++] = str[offset++];
		cpydest[i] = '\0';
	}
	while (str[offset] && is_in_charset(str[offset], charset))
		offset++;
	return (offset);
}

int	str_len(char *str, char *charset, int offset)
{
	int	i;

	i = offset;
	while (str[i] && !is_in_charset(str[i], charset))
	{
		i++;
	}
	return (i - offset);
}

char	**ft_split(char *str, char *charset)
{
	int		offset;
	int		word_len;
	int		word_count;
	int		word_idx;
	char	**arr;

	word_idx = 0;
	word_count = count_words(str, charset);
	arr = (char **) malloc(sizeof(char *) * (word_count + 1));
	if (!arr)
		return (NULL);
	arr[word_count] = NULL;
	offset = next_wd(str, charset, 0, NULL);
	while (word_idx < word_count)
	{
		word_len = str_len(str, charset, offset);
		arr[word_idx] = (char *) malloc(sizeof(char) * (word_len + 1));
		if (!arr[word_idx])
			return (arr);
		offset = next_wd(str, charset, offset, arr[word_idx++]);
	}
	return (arr);
}

// #include <stdio.h>
//
// int main(void)
// {
// 	int i = 0;
// 	char **c = ft_split("..abc..ab,..a..", "");
// 	if (!c)
// 	{
// 		printf("failed\n");
// 		return (0);
// 	}
// 	while (c[i])
// 	{
// 		printf("%s\n", c[i]);
// 		free(c[i]);
// 		i++;
// 	}
// 	free(c);
// 	return (0);
// }
