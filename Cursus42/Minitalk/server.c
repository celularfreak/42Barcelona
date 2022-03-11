/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:00:39 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/03/11 08:30:45 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"


/*void	bit_a_acii(char *str)
{
	int temp;
    int i;
	int j;

    j = 0;
	while (str[j])
	{
		i = 7;
    	while(i >= 0)
    	{
        	temp = str[j] | 128;
        	if (temp)
			{
         	//printf("1");
            	//kill(pid, SIGUSR1);
			}
        	else
			{
         	 //printf("0");
            	//kill(pid, SIGUSR2);}
        	i--;
        	str[j] = str[j] << 1;
			usleep(500);
    	}
		j++;
	}
}*/

void	escucha(int sig)
{
static char buffer[8];
static int i = 0;
	printf("funcionando");
	if (sig == SIGUSR1)
	{
	buffer[i]= '1';
	printf("1");
	}
	else if (sig == SIGUSR2)
	{
		buffer[i]= '0';
		printf("0");
	}
	i++;

	if (i == 8)
	{
		i = 0;
		printf("%s", buffer);
	}

}



/*void transforma(char *str)
{
    int temp;
    int i;
	int j;

    j = 0;
	while (str[j])
	{
		i = 7;
    	while(i >= 0)
    	{
        	temp = str[j] & 128;
        	if (temp)
			{
         	printf("1");
            	escucha(SIGUSR1);
			}
        	else
			{
         	 printf("0");
            	escucha(SIGUSR2);}
        	i--;
        	str[j] = str[j] << 1;
			usleep(500);
    	}
		j++;	
	}
}*/
int	main(void)
{
	
	pid_t	pid;
	struct	sigaction sa;

	pid = getpid();
	printf("Awaiting connection at pid %d\n", pid);
	sa.sa_flags = SA_RESTART;
	sa.sa_handler = &escucha;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
	{
		sleep(1);
	}
	return (0);
}
