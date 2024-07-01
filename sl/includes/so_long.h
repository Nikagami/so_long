/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:13:15 by aafounas          #+#    #+#             */
/*   Updated: 2024/07/01 14:10:23 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SO_LONG_H
# define SO_LONG_H

# include "../MLX42/include/MLX42/MLX42.h"
# include "struct.h"
# include "check_map.h"
# include "images_textures.h"
# include "keyhook.h"
# include "free.h"
# include "display.h"
# include "utils.h"
# include "get_next_line.h"
# include "ft_printf.h"
# include <unistd.h>
# include <string.h>
# include <fcntl.h>

# define ERR_MALLOC -1
# define FAILURE 0
# define FINISH 1
# define SUCCESS 2

int		ft_strlen(const char *str);

#endif