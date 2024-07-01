/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:14:13 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:14:15 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	ft_texture_wall(t_data *data)
{
	data->i_wall = mlx_texture_to_image(data->mlx, data->t_wall);
	if (!data->i_wall)
		return (ft_free(data, ERR_MALLOC));
	return (1);
}

int	ft_texture_collectible(t_data *data)
{
	int	i;

	i = 0;
	data->i_collectible = ft_calloc(data->count_item, sizeof(mlx_image_t *));
	if (!data->i_collectible)
		return (ft_free(data, ERR_MALLOC));
	while (i < data->count_item)
	{
		data->i_collectible[i] = mlx_texture_to_image
			(data->mlx, data->t_collectible);
		if (!data->i_collectible[i])
			return (ft_free(data, ERR_IMAGE_COLLECTIBLE));
		i++;
	}
	return (1);
}

int	ft_texture_background(t_data *data)
{
	data->i_background = mlx_texture_to_image
		(data->mlx, data->t_background);
	if (!data->i_background)
		return (ft_free(data, ERR_IMAGE_BACKGROUND));
	return (1);
}

int	ft_texture_player(t_data *data)
{
	data->i_player = mlx_texture_to_image(data->mlx, data->t_player);
	if (!data->i_player)
		return (ft_free(data, ERR_IMAGE_PLAYER));
	return (1);
}

int	ft_texture_exit(t_data *data)
{
	data->i_exit = ft_calloc(2, sizeof(mlx_image_t *));
	if (!data->i_exit)
		return (ft_free(data, ERR_MALLOC));
	data->i_exit[0] = mlx_texture_to_image(data->mlx, data->t_exit[0]);
	if (!data->i_exit[0])
		return (ft_free(data, ERR_IMAGE_EXIT));
	data->i_exit[1] = mlx_texture_to_image(data->mlx, data->t_exit[1]);
	if (!data->i_exit[1])
		return (ft_free(data, ERR_IMAGE_EXIT));
	return (1);
}
