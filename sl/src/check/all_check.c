/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:16:42 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:16:44 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	check_name(char *str, int i)
{
	if (i > 4 && str[i - 3] == '.' && str[i - 2] == 'b' && \
		str[i - 1] == 'e' && str[i] == 'r')
		return (1);
	return (0);
}

int	check_file(t_data *data)
{
	if (!check_wall(data))
		return (ft_free(data, ERR_WALL));
	if (!check_size(data))
		return (ft_free(data, ERR_SIZE));
	check_values(data);
	if (data->count_exit != 1)
		return (ft_free(data, ERR_EXIT));
	if (data->count_item < 1)
		return (ft_free(data, ERR_COLLECTIBLE));
	if (data->count_player != 1)
		return (ft_free(data, ERR_PLAYER));
	return (1);
}
