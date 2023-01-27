/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:31:52 by thbui             #+#    #+#             */
/*   Updated: 2023/01/27 16:28:49 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//lenght counter for %p and %x/X
//uintptr_t = an unsigned int used with addresses and pointers
int	ft_len(uintptr_t nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb = nb / 16;
	}
	return (len);
}

//recursion
void	ft_put_addr(uintptr_t nb)
{
	if (nb >= 16)
	{
		ft_put_addr(nb / 16);
		ft_put_addr(nb % 16);
	}
	else
	{
		if (nb <= 9)
			ft_putchar(nb + '0');
		else
			ft_putchar(nb - 10 + 'a');	//nb greater than 9 and smaller than 16
	}
}

//version for linux returns (nil) if nb is 0;
int	ft_print_address(uintptr_t nb)
{
	int	print_length;

	print_length = 0;
	if (nb == 0)
		print_length += write(1, "(nil)", 5);
	else
	{
		print_length += write(1, "0x", 2);
		ft_put_addr(nb);
		print_length += ft_len(nb);
	}
	return (print_length);
}

// Mac version returns 0x0 for 0
/*
int	ft_print_address(uintptr_t nb)
{
	int	print_length;

	print_length = 0;
	print_length += write(1, "0x", 2);
	if (nb == 0)
		print_length += write(1, "0", 1);
	else
	{
		ft_put_addr(nb);
		print_length += ft_len(nb);
	}
	return (print_length);
}
*/