/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:23:02 by fseles            #+#    #+#             */
/*   Updated: 2023/06/14 20:19:24 by fweichse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include "map.h"

void	print_map(t_map *pointer);
void	free_map(t_map *map);
t_map	*alloc_map(void);
char	*my_realloc(char *old, int old_size, int new_size);

int		simple_atoi(char *str);

void	handle_file(char *file);
void	handle_stdin(void);
int		handle_map(int fd, int rows, char symbols[3]);

int		read_metadata(int fd, int *rows, char symbols[3]);
char	*read_first_line(int fd);

void	set_metadata(t_map *map, int rows, char symbols[3]);
int		set_map(int fd, t_map *map);

int		validate_metadata(char num[14], char symbols[3]);
int		validate_map(t_map *map);

int		check_vert(t_map *map, int row, int col, int size);
int		check_horz(t_map *map, int row, int col, int size);
int		max_possible_square(t_map *map, int row, int col);
int		try_square(t_map *map, int row, int col);

int		is_print(char c);
int		is_num(char c);
int		ft_strlen(char *str);

void	find_solution(t_map *map);

#endif
