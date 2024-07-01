/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:59:21 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 13:59:22 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "so_long.h"

int		ft_printf(const char *s, ...);
int		ft_print_char(int c);
int		ft_print_str(char *s);
int		ft_puthex(unsigned long n, char *hex, int ptr);
int		ft_putnbr(int n);
int		ft_uputnbr(unsigned int n);

#endif