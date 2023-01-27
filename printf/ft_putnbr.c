/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:58:24 by thbui             #+#    #+#             */
/*   Updated: 2023/01/27 16:30:44 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	lenght;

	lenght = 0;
	if (n == -2147483648)
	{
		lenght += ft_putchar('-');
		lenght += ft_putchar('2');
		lenght += ft_putnbr(147483648);	//recursion
	}
	else if (n > 9)
	{
		lenght += ft_putnbr(n / 10);	//modulo
		lenght += ft_putnbr(n % 10);	//division
	}
	else if (n < 0)
	{
		n = -n;				// "-" + "-" == "+"
		lenght += ft_putchar('-');	//writes "-" at the begining
		lenght += ft_putnbr(n);		//recursion
	}
	else
		lenght += ft_putchar(n + '0');
	return (lenght);
}
