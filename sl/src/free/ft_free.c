/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:14:37 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:14:40 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_free_map(char **map)
{
	int	i;

	i = 0;
	if (!map)
		return ;
	while (map[i])
	{
		free(map[i++]);
	}
	free(map);
}

int	ft_free(t_data *data, int error)
{
	ft_free_images(data);
	ft_free_textures(data);
	ft_free_struct(data);
	return (ft_print_error(error));
}

void	ft_free_struct(t_data *data)
{
	if (data->m_name)
		free(data->m_name);
	if (data->p_player)
		free(data->p_player);
	if (data->p_exit)
		free(data->p_exit);
	if (data->p_collectible)
		free(data->p_collectible);
	ft_free_map(data->map);
}

void	ft_free_images(t_data *data)
{
	ft_free_image_background(data);
	ft_free_image_wall(data);
	ft_free_image_collectible(data);
	ft_free_image_player(data);
	ft_free_image_exit(data);
}

void	ft_free_textures(t_data *data)
{
	ft_free_texture_background(data);
	ft_free_texture_wall(data);
	ft_free_texture_collectible(data);
	ft_free_texture_player(data);
	ft_free_texture_exit(data);
	if (data->mlx)
		mlx_close_window(data->mlx);
}
