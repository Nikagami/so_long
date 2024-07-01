/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:15:13 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:15:14 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	player_up(t_data *data)
{
	if (data->map[data->p_player->y - 1][data->p_player->x] != '1')
	{
		data->i_player->instances->y -= 64;
		data->p_player->y--;
		data->index++;
		ft_printf("You moved %d time\n", data->index);
		ft_remove_collectible(data);
	}
}

void	player_down(t_data *data)
{
	if (data->map[data->p_player->y + 1][data->p_player->x] != '1')
	{
		data->i_player->instances->y += 64;
		data->p_player->y++;
		data->index++;
		ft_printf("You moved %d time\n", data->index);
		ft_remove_collectible(data);
	}
}

void	player_left(t_data *data)
{
	if (data->map[data->p_player->y][data->p_player->x - 1] != '1')
	{
		data->i_player->instances->x -= 64;
		data->p_player->x--;
		data->index++;
		ft_printf("You moved %d time\n", data->index);
		ft_remove_collectible(data);
	}
}

void	player_right(t_data *data)
{
	if (data->map[data->p_player->y][data->p_player->x + 1] != '1')
	{
		data->i_player->instances->x += 64;
		data->p_player->x++;
		data->index++;
		ft_printf("You moved %d time\n", data->index);
		ft_remove_collectible(data);
	}
}
