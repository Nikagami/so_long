/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:15:25 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:15:27 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	ft_display_background(t_data *data)
{
	int	x;
	int	y;

	x = 0;
	while (data->map[x])
	{
		y = 0;
		while (data->map[x][y])
		{
			mlx_image_to_window
				(data->mlx, data->i_background, y * 64, x * 64);
			y++;
		}
		x++;
	}
	return (1);
}

int	ft_display_wall(t_data *data)
{
	int	x;
	int	y;

	y = 0;
	while (data->map[y])
	{
		x = 0;
		while (data->map[y][x])
		{
			if (data->map[y][x] == '1')
				mlx_image_to_window(data->mlx, data->i_wall, x * 64, y * 64);
			x++;
		}
		y++;
	}
	return (1);
}

int	ft_display_collectible(t_data *data)
{
	int	x;
	int	y;
	int	i;

	y = 1;
	i = 0;
	while (data->map[y])
	{
		x = 0;
		while (data->map[y][x])
		{
			if (data->map[y][x] == 'C')
			{
				mlx_image_to_window(data->mlx, data->i_collectible[i],
					(x * 64), (y * 64));
				i++;
			}
			x++;
		}
		y++;
	}
	return (1);
}

int	ft_display_player(t_data *data)
{
	mlx_image_to_window(data->mlx, data->i_player,
		data->p_player->x * 64, data->p_player->y * 64);
	return (1);
}

int	ft_display_exit(t_data *data)
{
	int	i;

	i = 1;
	mlx_image_to_window(data->mlx, data->i_exit[0],
		data->p_exit->x * 64, data->p_exit->y * 64);
	mlx_image_to_window(data->mlx, data->i_exit[1],
		data->p_exit->x * 64, data->p_exit->y * 64);
	data->i_exit[1]->enabled = false;
	return (1);
}
