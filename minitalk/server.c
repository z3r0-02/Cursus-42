/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:59:27 by thbui             #+#    #+#             */
/*   Updated: 2023/05/08 15:49:42 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_sig_handler(int sig)
{
	static int	i;
	static int	bit;

	if (sig == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		write(1, &i, 1);
		bit = 0;
		i = 0;
	}
}

int main()		//only signals to be used: SIGUSR1, SIGUSR2
{
	int	PID;						//integer value

	PID = getpid();					//getpid() returns the PID of the process and stores it in PID
	ft_printf("PID: %d\n", PID);
    signal(SIGUSR1, ft_sig_handler);
    signal(SIGUSR2, ft_sig_handler);
    while (1)
		pause();					//pause until a signal is received
}
