/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:16:49 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:16:51 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "so_long.h"

// =================
//  UTILS FUNCTIONS
// =================
int		ft_tablen(char **map);
int		ft_count_values(t_data *data);
void	ft_bzero(void *s, int n);
char	*ft_itoa(int n);

#endif