/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:00:39 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/03/11 16:14:46 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>

void	escucha(int sig)
{
	static char	buffer = '\0';
	static int	i = 8;

	i--;
	if (sig == SIGUSR1)
		buffer = buffer | (1 << i);
	if (i == 0)
	{
		i = 8;
		write(1, &buffer, 1);
		buffer = '\0';
	}
}

int	main(void)
{
	struct sigaction	sa;

	printf("Awaiting connection at pid %i\n", getpid());
	sa.sa_flags = SA_SIGINFO;
	sa.sa_handler = &escucha;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
	{
		sleep(1);
	}
	return (0);
}
