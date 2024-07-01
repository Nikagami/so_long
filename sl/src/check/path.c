/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:15:42 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:15:44 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	find_collectible(t_data *data)
{
	int	i;
	int	x;
	int	y;

	y = 0;
	i = 0;
	data->p_collectible = ft_calloc
		(data->count_item, sizeof(t_pos_collec));
	if (!data->p_collectible)
		return (ft_free(data, ERR_MALLOC));
	while (data->map[y])
	{
		x = 0;
		while (data->map[y][x])
		{
			if (data->map[y][x] == 'C')
			{
				data->p_collectible[i].y = y;
				data->p_collectible[i++].x = x;
			}
			x++;
		}
		y++;
	}
	return (1);
}

void	find_player(t_data *data)
{
	data->p_player = ft_calloc(1, sizeof(t_pos));
	*data->p_player = (t_pos){0};
	while (data->map[data->p_player->y])
	{
		data->p_player->x = 0;
		while (data->map[data->p_player->x])
		{
			if (data->map[data->p_player->y][data->p_player->x] == 'P')
				return ;
			data->p_player->x++;
		}
		data->p_player->y++;
	}
}

void	find_exit(t_data *data)
{
	data->p_exit = ft_calloc(1, sizeof(t_pos));
	*data->p_exit = (t_pos){0};
	while (data->map[data->p_exit->y])
	{
		data->p_exit->x = 0;
		while (data->map[data->p_exit->x])
		{
			if (data->map[data->p_exit->y][data->p_exit->x] == 'E')
				return ;
			data->p_exit->x++;
		}
		data->p_exit->y++;
	}
}

void	path_is_valid(t_data *data, int x, int y)
{
	if (x > data->width || y > data->height || data->map[y][x] == '1' \
	|| data->map[y][x] == 'V')
		return ;
	data->map[y][x] = 'V';
	path_is_valid(data, x + 1, y);
	path_is_valid(data, x, y + 1);
	path_is_valid(data, x - 1, y);
	path_is_valid(data, x, y - 1);
}

int	fill(t_data *data)
{
	data->width = ft_strlen(data->map[0]);
	data->height = ft_tablen(data->map);
	find_player(data);
	find_exit(data);
	find_collectible(data);
	path_is_valid(data, data->p_player->x, data->p_player->y);
	if (!check_path(data->map))
		return (ft_free(data, ERR_PATH));
	return (ft_free_map(data->map), 1);
}
