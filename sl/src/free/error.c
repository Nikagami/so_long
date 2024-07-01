/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:14:59 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:15:01 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

char	*ft_error_map(int error)
{
	if (error == ERR_ARG)
		return ("wrong number of arguments");
	else if (error == ERR_FILE)
		return ("wrong extension file");
	else if (error == ERR_SIZE)
		return ("wrong size of map");
	else if (error == ERR_WALL)
		return ("map not surrounded by walls");
	else if (error == ERR_VALUES)
		return ("invalid value in map");
	else if (error == ERR_PLAYER)
		return ("wrong number of player");
	else if (error == ERR_EXIT)
		return ("wrong number of exit");
	else if (error == ERR_COLLECTIBLE)
		return ("wrong number of collectible");
	else if (error == ERR_PATH)
		return ("path not valid");
	return ("???");
}

char	*ft_error_image(int error)
{
	if (error == ERR_IMAGE_BACKGROUND)
		return ("loading image of background failed");
	else if (error == ERR_IMAGE_WALL)
		return ("loading image of wall failed");
	else if (error == ERR_IMAGE_PLAYER)
		return ("loading image of player failed");
	else if (error == ERR_IMAGE_EXIT)
		return ("loading image of exit failed");
	else if (error == ERR_IMAGE_COLLECTIBLE)
		return ("loading image of collectible failed");
	return ("???");
}

char	*ft_error_texture(int error)
{
	if (error == ERR_TEXTURE_BACKGROUND)
		return ("loading texture of background failed");
	else if (error == ERR_TEXTURE_WALL)
		return ("loading texture of wall failed");
	else if (error == ERR_TEXTURE_PLAYER)
		return ("loading texture of player failed");
	else if (error == ERR_TEXTURE_EXIT)
		return ("loading texture of exit failed");
	else if (error == ERR_TEXTURE_COLLECTIBLE)
		return ("loading texture of collectible failed");
	return ("???");
}

int	ft_print_error(int number)
{
	if (number == ERR_MALLOC)
		ft_printf("error\nmalloc\n");
	else if (number <= -1 && number >= -10)
		ft_printf("error\n%s\n", ft_error_map(number));
	else if (number <= -11 && number >= -15)
		ft_printf("error\n%s\n", ft_error_texture(number));
	else if (number <= -16 && number >= -20)
		ft_printf("error\n%s\n", ft_error_image(number));
	else if (number == FINISH)
		ft_printf("Game closed\n");
	else if (number == SUCCESS)
		ft_printf("\n\n\nYOU WON ! Congratulation :)\n\n\n");
	return (number);
}
