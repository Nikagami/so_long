/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:13:32 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:13:35 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	if (format == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_puthex(va_arg(args, unsigned long), "0123456789abcdef", 1));
	else if (format == 'x')
		return (ft_puthex(va_arg(args, unsigned int), "0123456789abcdef", 0));
	else if (format == 'X')
		return (ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF", 0));
	else if (format == 'u')
		return (ft_uputnbr(va_arg(args, unsigned int)));
	else if (format == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		len;
	int		i;
	va_list	args;

	if (!s)
		return (0);
	va_start(args, s);
	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			len += ft_formats(args, s[i + 1]);
			i++;
		}
		else
			len += ft_print_char(s[i]);
		i++;
	}
	va_end(args);
	return (len);
}

// int	main()
// {
// 	int	len = ft_printf("%d\n", -9);
// 	int	len1 = printf("%d\n", -9);
// 	ft_printf("%d\n", len);
// 	printf("%d\n", len1);
// }