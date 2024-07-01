/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_collectibles.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:15:19 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:15:21 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	ft_open_exit(t_data *data)
{
	if (data->count_item == data->nb_collected)
		data->i_exit[1]->enabled = true;
	if (data->p_player->x == data->p_exit->x
		&& data->p_player->y == data->p_exit->y
		&& data->i_exit[1]->enabled == true)
		return (ft_free(data, SUCCESS));
	return (0);
}

void	ft_remove_collectible(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->count_item)
	{
		if (data->p_player->x == data->p_collectible[i].x && \
			data->p_player->y == data->p_collectible[i].y && \
			data->p_collectible[i].is_collected == 0)
		{
			data->i_collectible[i]->enabled = false;
			data->p_collectible[i].is_collected = 1;
			data->nb_collected++;
			ft_printf("collectible collected !\n");
		}
		i++;
	}
	ft_open_exit(data);
}
