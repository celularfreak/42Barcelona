/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:00:39 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/03/07 15:08:54 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minitalk.h"

void escucha(int sig)
{
	if (sig == SIGUSR1)
		write(1, "1", 1);
	else if (sig == SIGUSR2)
		write(1, "0", 1);
}

int main(void)
{
	pid_t pid;

	pid = getpid();
	printf("Awaiting connection at pid %d\n", pid);
	struct sigaction sa;
        sa.sa_flags = SA_RESTART;
        sa.sa_handler = &escucha;
        sigaction(SIGUSR1, &sa, NULL);
		sigaction(SIGUSR2, &sa, NULL);
		//pause();
	while(1)
	{
		sleep(1);
	}
	return 0;
}
