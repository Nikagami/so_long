/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:16:23 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:16:25 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	ft_bzero(void *s, int n)
{
	int	i;

	i = 0;
	while (i < n)
		((char *)s)[i++] = 0;
}

int	ft_tablen(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}
