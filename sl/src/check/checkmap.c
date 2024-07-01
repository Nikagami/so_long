/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:16:30 by aafounas          #+#    #+#             */
/*   Updated: 2024/07/01 14:03:52 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

char	**read_f(int fd)
{
	char	*str;
	char	*map;
	char	**tab;

	if (fd < 0)
		return (NULL);
	str = get_next_line(fd);
	map = NULL;
	while (str)
	{
		map = ft_strjoin(map, str);
		if (!map)
			return (NULL);
		free (str);
		str = get_next_line(fd);
	}
	tab = ft_split(map, '\n');
	if (!tab)
		return (NULL);
	free(map);
	close(fd);
	return (tab);
}

int	check_sides(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		if (map[i][0] != '1' || map[i][ft_strlen(map[i]) - 1] != '1')
			return (0);
		i++;
	}
	return (1);
}

int	check_wall(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (data->map[0][i])
	{
		if (data->map[0][i] != '1')
			return (0);
		i++;
	}
	j = ft_tablen(data->map) - 1;
	i = 0;
	while (data->map[j][i])
	{
		if (data->map[j][i] != '1')
			return (0);
		i++;
	}
	if (!check_sides(data->map))
		return (0);
	return (1);
}

int	check_values(t_data *data)
{
	int	x;
	int	y;

	y = 0;
	while (data->map[y])
	{
		x = 0;
		while (data->map[y][x])
		{
			if (data->map[y][x] == 'E')
				data->count_exit += 1;
			if (data->map[y][x] == 'C')
				data->count_item += 1;
			if (data->map[y][x] == 'P')
				data->count_player += 1;
			x++;
		}
		y++;
	}	
	return (1);
}

int	check_size(t_data *data)
{
	int	len;
	int	i;

	len = ft_strlen(data->map[0]);
	i = 1;
	while (data->map[i])
	{
		if (ft_strlen(data->map[i]) != len)
			return (0);
		i++;
	}
	return (1);
}
