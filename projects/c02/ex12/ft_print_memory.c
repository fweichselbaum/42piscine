/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:18:14 by fweichse          #+#    #+#             */
/*   Updated: 2023/05/30 21:12:23 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_int_hex(unsigned long long nr, int pad)
{
	char	str[16];
	int		i;
	int		max_pad;

	i = 0;
	while (nr)
	{
		str[i] = "0123456789abcdef"[nr % 16];
		nr /= 16;
		i++;
	}
	if (pad)
		max_pad = 16;
	else
		max_pad = 2;
	while (i < max_pad)
	{
		str[i] = '0';
		i++;
	}
	i--;
	while (i >= 0)
		write(1, &str[i--], 1);
}

int	print_row_hex(void *ptr, unsigned int pos, unsigned int size)
{
	unsigned char	*cptr;
	unsigned int	max;

	max = pos + 16;
	cptr = (unsigned char *) ptr;
	while (pos < max && pos < size)
	{
		print_int_hex(*(cptr + pos % 16), 0);
		if (pos % 2 == 1)
			write(1, " ", 1);
		pos++;
	}
	return (max - pos);
}

void	print_row_chars(void *ptr, unsigned int pos, unsigned int size)
{
	unsigned char	*cptr;
	unsigned char	c;
	unsigned int	max;

	max = pos + 16;
	cptr = (unsigned char *) ptr;
	while (pos < max && pos < size)
	{
		c = *(cptr + pos % 16);
		if (c >= 20 && c <= 126)
			write(1, &c, 1);
		else
			write(1, ".", 1);
		pos++;
	}
}

void	fill_row(int fill)
{
	int	i;

	i = 0;
	while (i < fill * 2.5)
	{
		write(1, " ", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		i;
	void				*ptr;
	int					fill;

	i = 0;
	while (i < size)
	{
		ptr = addr + i;
		print_int_hex((unsigned long long) ptr, 2);
		write(1, ": ", 2);
		fill = print_row_hex(ptr, i, size);
		fill_row(fill);
		print_row_chars(ptr, i, size);
		write(1, "\n", 1);
		i += 0x10;
	}
	return (addr);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char* arr = (char*) malloc(40 * sizeof(char));
	strcpy(arr, "Hello Yogiiii!\n");
	
	ft_print_memory(arr, 35);
	free(arr);
	return 0;
}
