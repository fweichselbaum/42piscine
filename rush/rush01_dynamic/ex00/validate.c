/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 11:24:48 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/04 13:34:50 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int ft_validate_size(char *str)
{
	int	i;
	int	size;

	i = 1;
	size = 0;
	while (i < 10)
	{
		if (ft_strlen(str) == (i * 4) + (i * 4 - 1))
		{
			size = i;
			break;
		}
		i++;
	}
	return (size);
}

int	ft_validate_input(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = ft_validate_size(str);
	if (size == 0)
		return (0);
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (str[i] < '1' || str[i] > ('0' + size))
				return (0);
		}
		else
		{
			if (str[i] != ' ')
				return (0);
		}
		i++;
	}
	return (size);
}
