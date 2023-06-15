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

int	ft_validate_input(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != 31)
		return (0);
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (str[i] < '1' || str[i] > '4')
				return (0);
		}
		else
		{
			if (str[i] != ' ')
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_validate_constraints_opposite(int constraints[4][4])
{
	int	i;
	int	sum;

	i = 0;
	while (i < 4)
	{
		sum = constraints[0][i] + constraints[1][i];
		if (sum <= 2 || sum >= 6)
			return (0);
		sum = constraints[2][i] + constraints[3][i];
		if (sum <= 2 || sum >= 6)
			return (0);
		i++;
	}
	return (1);
}

int	ft_validate_constraints_same(int constraints[4][4])
{
	int	i;
	int	j;
	int	sum;

	i = 0;
	while (i < 4)
	{
		j = 0;
		sum = 0;
		while (j < 4)
		{
			sum += constraints[i][j];
			j++;
		}
		if (sum <= 4 || sum >= 11)
			return (0);
		i++;
	}
	return (1);
}
