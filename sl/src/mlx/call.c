/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:14:29 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:14:33 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	ft_texture_to_image(t_data *data)
{
	if (!data)
		return (0);
	if (ft_texture_background(data) < 1)
		return (0);
	if (ft_texture_wall(data) < 1)
		return (0);
	if (ft_texture_player(data) < 1 || ft_texture_exit(data) < 1)
		return (0);
	if (ft_texture_collectible(data) < 1)
		return (0);
	return (1);
}

int	ft_load_png(t_data *data)
{
	if (ft_load_background(data) < 1)
		return (0);
	if (ft_load_wall(data) < 1)
		return (0);
	if (ft_load_player(data) < 1)
		return (0);
	if (ft_load_exit(data) < 1)
		return (0);
	data->t_collectible = mlx_load_png
		("./textures/collectibles/herbe.png");
	if (!data->t_collectible)
		return (ft_free(data, ERR_TEXTURE_COLLECTIBLE));
	return (1);
}
