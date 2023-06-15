/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:58:54 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/30 18:17:40 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_word(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	to_lower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

void	to_upper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

char	*ft_strcapitalize(char *str)
{
	int	in_word;
	int	i;

	in_word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!in_word && is_word(str[i]))
		{
			in_word = 1;
			to_upper(&str[i]);
		}
		else if (is_word(str[i]))
		{
			to_lower(&str[i]);
		}
		else
			in_word = 0;
		i++;
	}
	return (str);
}
// #include <stdio.h>
//
// int main()
// {
// 	char test[]
// 		= "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
// 	puts(test);
// 	puts(ft_strcapitalize(test));
// }
