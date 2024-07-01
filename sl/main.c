/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:58:39 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 13:58:43 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

int open_and_check(t_data *data)
{
	if (check_name(data->m_name, ft_strlen(data->m_name) - 1) < 1)
		return (ft_free(data, ERR_FILE));
 	data->map = read_f(open(data->m_name, O_RDONLY));
	if (!data->map)
		return (ft_free(data, ERR_MALLOC));
	if (check_file(data) < 1)
		return (0);
	if (fill(data) < 1)
		return (0);
 	data->map = read_f(open(data->m_name, O_RDONLY));
	if (!data->map)
		return (ft_free(data, ERR_MALLOC));
	return (1);
}

void	ft_close(void *param)
{
	t_data	*data;

	data = param;
	ft_free(data, FINISH);
}

int	main(int ac, char **av)
{
	t_data	data;

	if (ac != 2)
		return (ft_print_error(ERR_ARG));
	ft_bzero(&data, sizeof(t_data));
	data.m_name = ft_strjoin(NULL, av[1]);
	if (!data.m_name)
		return (ft_free(&data, ERR_MALLOC));
	if (open_and_check(&data) < 1)
		return (1);
	data.mlx = mlx_init(data.width * 64, data.height * 64, \
		"so_long", false);
	if (!data.mlx)
		return (ft_free(&data, ERR_MALLOC));
	if (ft_load_png(&data) < 1 || ft_texture_to_image(&data) < 1 || \
		ft_display(&data) < 1) // ft_load = charger image dans texture, a appeler ft_png_to_texture
		return (1);
	mlx_key_hook(data.mlx, &ft_keyhook, &data);
	mlx_close_hook(data.mlx, &ft_close, &data);
	mlx_loop(data.mlx);
}
	