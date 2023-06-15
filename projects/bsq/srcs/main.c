/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fweichse <fweichse>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:59:03 by fweichse          #+#    #+#             */
/*   Updated: 2023/06/15 11:24:33 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"
#include "map.h"
#include "functions.h"

// hello

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		handle_stdin();
		return (EXIT_SUCCESS);
	}
	while (i < argc)
		handle_file(argv[i++]);
	return (EXIT_SUCCESS);
}
