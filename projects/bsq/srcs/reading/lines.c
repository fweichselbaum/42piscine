/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:14:43 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/14 17:47:41 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"
#include "functions.h"

void	cpy(char *dest, char *src, int offset, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dest[i + offset] = src[i];
		i++;
	}
}

int	contains(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (i < len)
		if (str[i++] == c)
			return (1);
	return (0);
}

void	init_vars(int *i, int *storesize)
{
	*i = 0;
	*storesize = 11;
}

int	check_increase(int *i, int *storesize, char **store)
{
	if (*i == *storesize)
	{
		*store = my_realloc(*store, *storesize, *storesize + 10);
		if (!*store)
			return (0);
		*storesize += 10;
	}
	return (1);
}

char	*read_first_line(int fd)
{
	char	*store;
	int		storesize;
	char	buf;
	int		bytes_read;
	int		i;

	init_vars(&i, &storesize);
	store = (char *) malloc(storesize);
	if (!store)
		return (NULL);
	bytes_read = read(fd, &buf, 1);
	while (bytes_read && buf != '\n')
	{
		store[i++] = buf;
		bytes_read = read(fd, &buf, 1);
		if (!check_increase(&i, &storesize, &store))
			return (NULL);
	}
	if (bytes_read == 0)
	{
		free(store);
		return (NULL);
	}
	store[i] = '\0';
	return (store);
}
