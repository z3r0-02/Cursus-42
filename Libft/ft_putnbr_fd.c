/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:58:24 by thbui             #+#    #+#             */
/*   Updated: 2023/01/19 14:04:44 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd); //iteration
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);	//modulo
		ft_putnbr_fd(n % 10, fd);	//division
	}
	else if (n < 0)
	{
		n = -n;			// "-" + "-" == "+"
		ft_putchar_fd('-', fd);	//writes "-" at the begining
		ft_putnbr_fd(n, fd);	//iteration
	}
	else
		ft_putchar_fd(n + '0', fd);
}
