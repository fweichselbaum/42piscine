/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 23:51:23 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/06 11:46:45 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	validate_base(char *base)
{
	int	len;
	int	i;
	int	j;

	len = ft_strlen(base);
	if (len <= 1)
		return (0);
	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr(long long lnb, char *base, int b)
{
	char	digits[32];
	int		i;

	i = 0;
	if (lnb < 0)
	{
		write(1, "-", 1);
		lnb = -lnb;
	}
	while (lnb > 0)
	{
		digits[i++] = base[lnb % b];
		lnb /= b;
	}
	while (--i >= 0)
		write(1, digits + i, 1);
}

void	ft_putnbr_base(int nb, char *base)
{
	if (!validate_base(base))
		return ;
	if (nb == 0)
	{
		write(1, base, 1);
		return ;
	}
	ft_putnbr((long long) nb, base, ft_strlen(base));
}

// #include <stdio.h>
//
// int main(void)
// {
// 	printf("%d\n", validate_base("01"));
// 	printf("%d\n", validate_base("0123456789"));
// 	printf("%d\n", validate_base("01"));
// 	printf("%d\n", validate_base("0123456789abcdef"));
// 	printf("%d\n", validate_base("01234567"));
// 	printf("%d\n", validate_base("hugo"));
// 	printf("%d\n", validate_base("1"));
// 	printf("%d\n", validate_base("0123456787"));
// 	printf("%d\n", validate_base("0123450789"));
// 	printf("%d\n", validate_base("01234567890"));
// 	printf("%d\n\n\n", validate_base("01234+abc"));
//
// 	ft_putnbr_base(0, "hugo");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(123, "hugo");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-123, "hugo");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(30, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(30, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(300, "0123456789ABCDEF");
// 	return (0);
// }
