/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:16:15 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/14 11:54:07 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"

char	*my_realloc(char *old, int old_size, int new_size)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *) malloc(new_size);
	if (!new)
	{
		free (old);
		return (NULL);
	}
	while (i < old_size && i < new_size)
	{
		new[i] = old[i];
		i++;
	}
	while (i < new_size)
	{
		new[i] = 0;
		i++;
	}
	free(old);
	return (new);
}
