/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   images_textures.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:17:07 by aafounas          #+#    #+#             */
/*   Updated: 2024/07/01 13:59:20 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMAGES_TEXTURES_H
# define IMAGES_TEXTURES_H

# include "so_long.h"

# define ERR_TEXTURE_BACKGROUND -11
# define ERR_TEXTURE_WALL -12
# define ERR_TEXTURE_PLAYER -13
# define ERR_TEXTURE_EXIT -14
# define ERR_TEXTURE_COLLECTIBLE -15

# define ERR_IMAGE_BACKGROUND -16
# define ERR_IMAGE_WALL -17
# define ERR_IMAGE_PLAYER -18
# define ERR_IMAGE_EXIT -19
# define ERR_IMAGE_COLLECTIBLE -20

// =================
//  MLX FUNCTIONS
// =================
int		ft_load_background(t_data *data);
int		ft_load_player(t_data *data);
int		ft_load_wall(t_data *data);
int		ft_load_exit(t_data *data);
int		ft_load_png(t_data *data);

int		ft_texture_background(t_data *data);
int		ft_texture_player(t_data *data);
int		ft_texture_wall(t_data *data);
int		ft_texture_exit(t_data *data);
int		ft_texture_collectible(t_data *data);
int		ft_texture_to_image(t_data *data);

#endif