/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:59:08 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 13:59:10 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_H
# define DISPLAY_H

# include "so_long.h"

int		ft_display(t_data *data);
int		ft_display_background(t_data *data);
int		ft_display_wall(t_data *data);
int		ft_display_player(t_data *data);
int		ft_display_collectible(t_data *data);

void	player_up(t_data *data);
void	player_down(t_data *data);
void	player_left(t_data *data);
void	player_right(t_data *data);

void	ft_remove_collectible(t_data *data);
int		ft_open_exit(t_data *data);
int		ft_display_exit(t_data *data);

void	ft_keyhook(mlx_key_data_t data_key, void *param);
#endif