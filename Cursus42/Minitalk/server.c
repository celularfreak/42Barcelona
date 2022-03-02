/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:00:39 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/03/02 11:09:16 by dnunez-m         ###   ########.fr       */
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
	while(1)
	{
	signal(SIGUSR1, escucha);
	signal(SIGUSR2, escucha);
	}
	return 0; 
}

