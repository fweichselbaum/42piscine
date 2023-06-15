/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 20:24:25 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/06 20:56:17 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *s)
{
	while (*s)
		write(1, s++, 1);
}

int	cmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	sort(int n, char *s[])
{
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		j = 1;
		while (j < n - i)
		{
			if (cmp(s[j], s[j + 1]) > 0)
				swap(&s[j], &s[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	sort(argc, argv);
	while (i < argc)
	{
		print(argv[i++]);
		write(1, "\n", 1);
	}
	return (0);
}
