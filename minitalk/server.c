/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:59:27 by thbui             #+#    #+#             */
/*   Updated: 2023/05/04 19:06:00 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdio.h>

void	ft_sig_handler(int sig, siginfo_t *info, void *context)
{

}

int	main(void)	//only signals to be used: SIGUSR1, SIGUSR2
{
	struct sigaction	sa;
	int					PID;

	PID = getpid();						//getpid() returns the PID of the process and stores it in PID
	printf("PID: %d\n", PID);
	sa.sa_sigaction = ft_sig_handler;	//a function that will handle the signal
	sa.sa_flags = SA_SIGINFO;			//siginfi_t, aditional info
	sigemptyset(&sa.sa_mask);			//initialize empty set in sa_mask, blocking any other signal while program is running, not needed, but a good practice
	sigaction(SIGUSR1, &sa, NULL);		//(signal, pointer to struct, a pointer to save the signal to modify or restore later (NULL to skip))
	sigaction(SIGUSR2, &sa, NULL);

	return (0);
}

// The choice between using sa_handler or sa_sigaction depends on the specific requirements of the signal handler.
// If the signal handler does not need the additional information provided by sa_sigaction, sa_handler is sufficient.
// However, if the signal handler requires access to detailed information about the signal or the CPU context, sa_sigaction should be used.