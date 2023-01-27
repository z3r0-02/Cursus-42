/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:03:01 by thbui             #+#    #+#             */
/*   Updated: 2023/01/27 16:24:44 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_type(va_list args, char type)
{
	if (type == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (type == 'p')
		return (ft_print_address(va_arg(args, uintptr_t)));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (type == 'u')
		return (ft_uns_decimal(va_arg(args, unsigned int)));
	else if (type == 'x' || type == 'X')
		return (ft_hexadecimal(va_arg(args, int), type));
	else if (type == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		lenght;
	int		i;

	lenght = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{	
			lenght += ft_check_type(args, str[i + 1]);
			i++;
		}
		else
			lenght += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (lenght);
}
