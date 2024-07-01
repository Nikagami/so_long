/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_textures.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:14:43 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:14:45 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_free_texture_background(t_data *data)
{
	if (data->t_background)
		mlx_delete_texture(data->t_background);
}

void	ft_free_texture_wall(t_data *data)
{
	if (data->t_wall)
		mlx_delete_texture(data->t_wall);
}

void	ft_free_texture_collectible(t_data *data)
{
	if (data->t_collectible)
		mlx_delete_texture(data->t_collectible);
}

void	ft_free_texture_player(t_data *data)
{
	if (data->t_player)
		mlx_delete_texture(data->t_player);
}

void	ft_free_texture_exit(t_data *data)
{
	int	i;

	i = 0;
	if (data->t_exit)
	{
		while (i < 2)
		{
			if (data->t_exit[i])
				mlx_delete_texture(data->t_exit[i]);
			i++;
		}
		free(data->t_exit);
	}
}
