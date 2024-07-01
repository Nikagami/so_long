/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:17:22 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:17:25 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# include "so_long.h"

typedef struct s_pos_collec
{
	int				x;
	int				y;
	int				is_collected;
}	t_pos_collec;

typedef struct s_pos
{
	int				x;
	int				y;
}	t_pos;

typedef struct s_data
{
	mlx_t			*mlx;
	char			*m_name;
	char			**map;
	int				height;
	int				width;
	int				map_size;
	int				count_wall;
	int				count_player;
	int				count_exit;
	int				count_item;
	int				index;
	int				nb_collected;
	char			*char_index;
	t_pos			*p_player;
	t_pos			*p_exit;
	t_pos_collec	*p_collectible;
	t_pos			*p_enemy;
	mlx_image_t		*i_background;
	mlx_image_t		*i_wall;
	mlx_image_t		*i_player;
	mlx_image_t		**i_exit;
	mlx_image_t		**i_collectible;
	mlx_texture_t	*t_background;
	mlx_texture_t	*t_wall;
	mlx_texture_t	*t_player;
	mlx_texture_t	**t_exit;
	mlx_texture_t	*t_collectible;
}	t_data;

#endif