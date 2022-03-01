/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:00:39 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/03/01 14:58:47 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

int main(void)
{
	pid_t pid;

	pid = getpid();
	while(1)
	{
	printf("Awaiting connection at pid %d\n", pid);
	sleep(1);
	signal(SIGINT, &escucha);
	
	return 0; 
}

void escucha(int sig)
{
	if (sig == SIGUSR1)
		printf("1");
	if (sig == SIGUSR2)
		printf("0");
}