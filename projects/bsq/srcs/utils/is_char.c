/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:41:01 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/14 12:41:03 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_print(char c)
{
	return (c >= 32 && c <= 126);
}

int	is_num(char c)
{
	return (c >= '0' && c <= '9');
}
