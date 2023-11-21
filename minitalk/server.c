/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:59:27 by thbui             #+#    #+#             */
/*   Updated: 2023/11/21 18:52:43 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	ft_sig_handler(int sig)
{
	static int	i;
	static int	bit;

	if (sig == SIGUSR1)
		i |= (0x01 << bit);		//0x01 is the same as 1, |= is a bitwise OR, it will compare i with bit-th bit if both are not 0 it will change to 1 without affecting the rest
	bit++;
	if (bit == 8)				//when it's the last one it will write out the value of i, and resets
	{
		write(1, &i, 1);
		bit = 0;
		i = 0;
	}
}

int	main(void)		//only signals to be used: SIGUSR1, SIGUSR2
{
	int	pid;						//integer value

	pid = getpid();					//getpid() returns the PID of the process and stores it in PID
	ft_printf("pid: %d\n", pid);
	signal(SIGUSR1, ft_sig_handler);	//defines the way it should respond to a specific signal
	signal(SIGUSR2, ft_sig_handler);	//application-level use signals
	while (1)
		pause();					//pause until a signal is received
}
