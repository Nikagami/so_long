/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:14:51 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:14:53 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_free_image_background(t_data *data)
{
	if (data->i_background)
		mlx_delete_image(data->mlx, data->i_background);
}

void	ft_free_image_wall(t_data *data)
{
	if (data->i_wall)
		mlx_delete_image(data->mlx, data->i_wall);
}

void	ft_free_image_collectible(t_data *data)
{
	int	i;

	i = 0;
	if (data->i_collectible)
	{
		while (i < data->count_item)
		{
			if (data->i_collectible[i])
				mlx_delete_image(data->mlx, data->i_collectible[i]);
			i++;
		}
		free(data->i_collectible);
	}
}

void	ft_free_image_player(t_data *data)
{
	int	i;

	i = 0;
	if (data->i_player)
		if (data->i_player)
			mlx_delete_image(data->mlx, data->i_player);
}

void	ft_free_image_exit(t_data *data)
{
	int	i;

	i = 0;
	if (data->i_exit)
	{
		while (i < 2)
		{
			if (data->i_exit[i])
				mlx_delete_image(data->mlx, data->i_exit[i]);
			i++;
		}
		free(data->i_exit);
	}
}
