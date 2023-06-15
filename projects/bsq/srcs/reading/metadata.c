/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   metadata.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 22:35:05 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/14 19:27:33 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"
#include "functions.h"

void	init(char arr[14])
{
	int	i;

	i = 0;
	while (i < 14)
		arr[i++] = 0;
}

int	read_metadata(int fd, int *rows, char symbols[3])
{
	char	buf;
	char	store[14];
	int		bytes_read;
	int		i;
	int		j;

	i = 0;
	init(store);
	bytes_read = read(fd, &buf, 1);
	while (bytes_read && is_print(buf) && i < 14)
	{
		store[i++] = buf;
		bytes_read = read(fd, &buf, 1);
	}
	if (buf != '\n')
		return (0);
	j = 0;
	i -= 3;
	if (i <= 0)
		return (0);
	while (j < 3)
		symbols[j++] = store[i++];
	store[i - 3] = '\0';
	*rows = simple_atoi(store);
	return (*rows > 0 && validate_metadata(store, symbols));
}
