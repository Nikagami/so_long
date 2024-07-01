/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:58:57 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 13:59:00 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_MAP_H
# define CHECK_MAP_H

# include "so_long.h"

# define ERR_ARG -2
# define ERR_FILE -3
# define ERR_SIZE -4
# define ERR_WALL -5
# define ERR_VALUES -6
# define ERR_PLAYER -7
# define ERR_EXIT -8
# define ERR_COLLECTIBLE -9
# define ERR_PATH -10

// =================
//  READ FUNCTIONS
// =================
char	**read_f(int fd);
char	**ft_split(char const *s, char c);

// =================
//  CHECK FUNCTIONS
// =================
int		check_name(char *file, int i);
int		check_size(t_data *data);
int		check_wall(t_data *data);
int		check_values(t_data *data);
int		check_file(t_data *data);
int		check_sides(char **map);
// =================
//  POSITIONS FUNCTIONS
// =================
void	find_exit(t_data *data);
void	find_player(t_data *data);
int		find_collectible(t_data *data);
void	find_positions(t_data *data);

// =================
//  PATH FUNCTIONS
// =================
void	path_is_valid(t_data *data, int x, int y);
int		check_path(char **map);
int		ft_find_path(t_data *data);
int		fill(t_data *data);

#endif