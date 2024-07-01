/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhook.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:15:08 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:15:09 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"
#include "../../includes/free.h"

void	ft_keyhook(mlx_key_data_t data_key, void *param)
{
	t_data	*data;

	data = param;
	if ((data_key.key == MLX_KEY_W || data_key.key == MLX_KEY_UP) && \
		(data_key.action == MLX_PRESS || data_key.action == MLX_REPEAT))
		player_up(data);
	if ((data_key.key == MLX_KEY_A || data_key.key == MLX_KEY_LEFT) && \
		(data_key.action == MLX_PRESS || data_key.action == MLX_REPEAT))
		player_left(data);
	if ((data_key.key == MLX_KEY_D || data_key.key == MLX_KEY_RIGHT) && \
		(data_key.action == MLX_PRESS || data_key.action == MLX_REPEAT))
		player_right(data);
	if ((data_key.key == MLX_KEY_S || data_key.key == MLX_KEY_DOWN) && \
		(data_key.action == MLX_PRESS || data_key.action == MLX_REPEAT))
		player_down(data);
	if (data_key.key == MLX_KEY_ESCAPE && data_key.action == MLX_PRESS)
		ft_free(data, FINISH);
}
