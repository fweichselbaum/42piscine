/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 23:51:03 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/05 23:53:16 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	return (c == ' ' || (c >= 0x9 && c <= 0xd));
}

void	compute_space(char **str)
{
	while (is_space(**str))
		(*str)++;
}

int	compute_sign(char **str)
{
	int	sign;

	sign = 1;
	while (**str == '+' || **str == '-')
	{
		if (**str == '-')
			sign = -sign;
		(*str)++;
	}
	return (sign);
}

int	compute_num(char *str)
{
	int	i;
	int	nr;

	i = 0;
	nr = 0;
	while (str[i] >= '0' && str[i] <= '9')
		nr = nr * 10 + (str[i++] - '0');
	return (nr);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	nr;

	nr = 0;
	compute_space(&str);
	sign = compute_sign(&str);
	nr = compute_num(str);
	return (nr * sign);
}

// #include <stdio.h>
//
// int main(void)
// {
// 	printf("%d\n", ft_atoi(" -a-+--+1234ab567"));
// 	printf("%d\n", ft_atoi(" - -+--+1234ab567"));
// 	printf("%d\n", ft_atoi(" \t-+--+1234ab567"));
// 	printf("%d\n", ft_atoi(" ---+--+0"));
// 	printf("%d\n", ft_atoi(" ---+--+a567"));
// 	printf("%d\n", ft_atoi(" ---+-- 567"));
// 	return (0);
// }
