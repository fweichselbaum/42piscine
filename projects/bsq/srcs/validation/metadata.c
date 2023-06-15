/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   metadata.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:24:50 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/14 19:30:55 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	validate_metadata(char num[14], char symbols[3])
{
	int	i;

	if (symbols[0] == symbols[1]
		|| symbols[0] == symbols[2]
		|| symbols[1] == symbols[2])
		return (0);
	i = 0;
	while (num[i] && i < 14)
	{
		if (!is_num(num[i]))
			return (0);
		i++;
	}
	return (1);
}
