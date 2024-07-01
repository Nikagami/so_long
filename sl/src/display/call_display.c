/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_display.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:15:31 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:15:34 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	ft_display(t_data *data)
{
	if (!data)
		return (0);
	ft_display_background(data);
	ft_display_wall(data);
	ft_display_collectible(data);
	ft_display_exit(data);
	ft_display_player(data);
	return (1);
}
