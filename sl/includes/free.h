/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:59:14 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 13:59:16 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FREE_H
# define FREE_H

# include "so_long.h"

void	ft_free_image_background(t_data *data);
void	ft_free_image_wall(t_data *data);
void	ft_free_image_collectible(t_data *data);
void	ft_free_image_player(t_data *data);
void	ft_free_image_exit(t_data *data);
void	ft_free_image_enemy(t_data *data);

void	ft_free_texture_background(t_data *data);
void	ft_free_texture_wall(t_data *data);
void	ft_free_texture_collectible(t_data *data);
void	ft_free_texture_player(t_data *data);
void	ft_free_texture_exit(t_data *data);
void	ft_free_texture_enemy(t_data *data);

// =================
//  FREE FUNCTIONS
// =================
int		ft_free(t_data *data, int error);
void	ft_free_images(t_data *data);
void	ft_free_textures(t_data *data);
void	ft_free_map(char **map);
int		ft_free_all(t_data *data);
void	ft_free_struct(t_data *data);

// =================
//  ERROR FUNCTIONS
// =================
int		ft_print_error(int error);
char	*ft_error_map(int error);
char	*ft_error_image(int error);
char	*ft_error_texture(int error);

#endif