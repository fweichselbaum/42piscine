/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 23:51:03 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/10 15:27:57 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	return (c == ' ' || (c >= 0x9 && c <= 0xd));
}

int	validate_base(char *base)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	len = 0;
	while (base[i++])
		len++;
	if (len <= 1)
		return (0);
	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || is_space(base[i]))
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

int	indexof(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

long long	compute_num(char *str, char *base)
{
	int			i;
	int			b;
	int			idx;
	long long	nr;

	i = 0;
	b = 0;
	nr = 0;
	while (base[b])
		b++;
	while (str[i])
	{
		idx = indexof(base, str[i]);
		if (idx == -1)
			break ;
		nr = nr * b + (idx);
		i++;
	}
	return (nr);
}

long long	ft_atoi_base(char *str, char *base)
{
	int			sign;
	long long	nr;

	nr = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 0x9 && *str <= 0xd))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	nr = compute_num(str, base);
	return (nr * sign);
}

// #include <stdio.h>
//
// int main(void)
// {
// 	puts("base broken");
// 	printf("%d\n", validate_base(""));
// 	printf("%d\n", validate_base("a"));
// 	printf("%d\n", validate_base("abcda"));
// 	printf("%d\n", validate_base("[]+()"));
// 	printf("%d\n", validate_base("456456"));
// 	printf("%d\n", validate_base("45 6"));
// 	printf("%d\n", validate_base("45\t6"));
// 	printf("%d\n", validate_base("4\n5\t6"));
//
// 	puts("\n\nbase working");
// 	printf("%d\n", validate_base("abc"));
// 	printf("%d\n", validate_base("01"));
// 	printf("%d\n", validate_base("[](){}"));
// 	printf("%d\n", validate_base("456321"));
//
// 	puts("\n\nbroken");
// 	printf("%d\n", ft_atoi_base(" -+-20", "0123456089"));
// 	printf("%d\n", ft_atoi_base(" --+-22", "2"));
// 	printf("%d\n", ft_atoi_base(" - 2", "0123456789"));
// 	printf("%d\n", ft_atoi_base(" - +2", "0123456789"));
// 	printf("%d\n", ft_atoi_base("-10000000000000000000000000000001", "01"));
// 	printf("%d\n", ft_atoi_base(" 10000000000000000000000000000000", "01"));
//
// 	puts("\n\nworking");
// 	printf("%d\n", ft_atoi_base(" --+-2a", "0123456789abcdef"));
// 	printf("%d\n", ft_atoi_base(" --+-2a", "0123456789"));
// 	printf("%d\n", ft_atoi_base(" \t--+-20", "0123456789"));
// 	printf("%d\n", ft_atoi_base(" --+-20", "0123456789"));
// 	printf("%d\n", ft_atoi_base("-10000000000000000000000000000000", "01"));
// 	printf("%d\n", ft_atoi_base("  1111111111111111111111111111111", "01"));
// 	return (0);
// }
