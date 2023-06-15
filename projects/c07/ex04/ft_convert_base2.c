/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 23:51:23 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/10 15:32:36 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int			validate_base(char *base);
long long	ft_atoi_base(char *str, char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	num_str_len(long long lnb, int b)
{
	int		i;

	i = 0;
	if (lnb == 0)
		return (1);
	if (lnb < 0)
	{
		lnb = -lnb;
		i++;
	}
	while (lnb > 0)
	{
		lnb /= b;
		i++;
	}
	return (i);
}

char	*ft_storenbr(long long lnb, char *base, int b)
{
	char	*digits;	
	int		i;

	i = num_str_len(lnb, b) + 1;
	digits = (char *) malloc(sizeof(char) * (i--));
	if (!digits)
		return (NULL);
	digits[i--] = '\0';
	if (lnb < 0)
	{
		digits[0] = '-';
		lnb = -lnb;
	}
	if (lnb == 0)
	{
		digits[0] = *base;
		return (digits);
	}
	while (lnb > 0)
	{
		digits[i--] = base[lnb % b];
		lnb /= b;
	}
	return (digits);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	lnb;

	if (!validate_base(base_from) || !validate_base(base_to))
		return (NULL);
	lnb = ft_atoi_base(nbr, base_from);
	if (lnb < INT_MIN || lnb > INT_MAX)
	{
		return (NULL);
	}
	return (ft_storenbr(lnb, base_to, ft_strlen(base_to)));
}

// #include <stdio.h>
//
// int main(void)
// {
// 	char	*c;
//
// 	c = ft_convert_base(
// 		"-1111111111111111111111111111111",
// 		"01",
// 		"0123456789");
// 	printf("%p -> %s\n", c, c);
// 	free(c);
// 	return (0);
// }
