/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:59:25 by thbui             #+#    #+#             */
/*   Updated: 2023/11/21 22:10:35 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	ft_send_each_bits(int pid, char c)
{
	static int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & 1 << bit) != 0)	//shifting bit value of decimal number to the left and testing if bit is set to 1
			kill(pid, SIGUSR1);		//sends 1
		else if ((c & 1 << bit) == 0)	//bit is set to 0
			kill(pid, SIGUSR2);		//sends 0
		usleep(128);				//more time might be needed
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int			pid;
	static int	i;

	i = 0;
	pid = ft_atoi(argv[1]);
	if (argc != 3 || !ft_strchr("1234567890", argv[1][i]))
		return (ft_printf("error"));
	while (argv[2][i] != '\0')
	{
		ft_send_each_bits(pid, argv[2][i]);		//converting each int to bit and sending it to PID with the function
		i++;
	}
}
