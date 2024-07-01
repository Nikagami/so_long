/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:14:18 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:14:20 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	ft_load_wall(t_data *data)
{
	data->t_wall = mlx_load_png("./textures/wall/blanc.png");
	if (!data->t_wall)
		return (ft_free(data, ERR_TEXTURE_WALL));
	return (1);
}

int	ft_load_background(t_data *data)
{
	data->t_background = mlx_load_png("./textures/background/background.png");
	if (!data->t_background)
		return (ft_free(data, ERR_TEXTURE_BACKGROUND));
	return (1);
}

int	ft_load_player(t_data *data)
{
	data->t_player = mlx_load_png("./textures/player/rasta.png");
	if (!data->t_player)
		return (ft_free(data, ERR_TEXTURE_PLAYER));
	return (1);
}

int	ft_load_exit(t_data *data)
{
	data->t_exit = ft_calloc(2, sizeof(mlx_texture_t *));
	if (!data->t_exit)
		return (ft_free(data, ERR_TEXTURE_EXIT));
	data->t_exit[0] = mlx_load_png("./textures/exit/exit1.png");
	data->t_exit[1] = mlx_load_png("./textures/exit/exit2.png");
	if (!data->t_exit[0] || !data->t_exit[1])
		return (ft_free(data, ERR_TEXTURE_EXIT));
	return (1);
}
