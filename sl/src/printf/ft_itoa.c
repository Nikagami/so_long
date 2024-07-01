/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:14:04 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:14:06 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

static int	ft_len_itoa(int n)
{
	int	len;

	len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		is_negative;
	char	*tab;

	is_negative = 0;
	if (n <= 0)
	{
		is_negative = 1;
		n *= -1;
	}
	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	tab = ft_calloc(ft_len_itoa(n) + is_negative + 1, sizeof(char));
	if (!tab)
		return (NULL);
	while (n)
	{
		tab[ft_len_itoa(n) + is_negative - 1] = (n % 10) + 48;
		n /= 10;
	}
	if (is_negative)
		tab[0] = '-';
	return (tab);
}
