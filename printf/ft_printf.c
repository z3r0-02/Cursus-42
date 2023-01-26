/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:03:01 by thbui             #+#    #+#             */
/*   Updated: 2023/01/26 22:18:57 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_putnbr.c"
#include "ft_putstr_char.c"
#include "ft_print_hex.c"
#include "ft_print_address.c"

int		ft_check_type(va_list args, char type)
{
	if (type == 'c')														//done | no multiple
			return (ft_putchar(va_arg(args, int)));
	else if (type == 's')													//dne | no multiple or NULL
			return (ft_putstr(va_arg(args, char *)));
	else if (type == 'p')
			return (ft_print_address(va_arg(args, uintptr_t)));
	else if (type == 'd' || type == 'i')									//done
			return (ft_putnbr(va_arg(args, int)));
	else if (type == 'u')													//done
			return (ft_uns_decimal(va_arg(args, unsigned int)));
	else if (type == 'x' || type == 'X')
			return (ft_hexadecimal(va_arg(args, int), type));
	else if (type == '%')													//done
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
