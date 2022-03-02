/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:00:39 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/03/02 16:57:43 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

void escucha(int sig)
{
	if (sig == SIGUSR1)
		printf("1");
	else if (sig == SIGUSR2)
		printf("0");
}

int main(void)
{
	pid_t pid;

	pid = getpid();
	printf("Awaiting connection at pid %d\n", pid);
	signal(SIGUSR1, escucha);
	while(1)
	{
		printf("esperando");
	//signal(SIGUSR2, escucha);
	pause();
	}
	
	return 0;
}

