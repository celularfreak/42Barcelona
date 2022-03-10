/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:00:39 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/03/10 13:38:19 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res_d;
	unsigned int	res_s;

	i = ft_strlen(dest);
	j = 0;
	res_d = ft_strlen(dest);
	res_s = ft_strlen(src);
	if (size < 1)
		return (res_s + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < res_d)
		return (res_s + size);
	else
		return (res_d + res_s);
}

void	bit_a_acii(char *str)
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
            	kill(pid, SIGUSR1);
			}
        	else
			{
         	 printf("0");
            	kill(pid, SIGUSR2);}
        	i--;
        	str[j] = str[j] << 1;
			usleep(500);
    	}
		j++;
	}
}
void	escucha(int sig)
{
static char *buffer;
while (ft_strlen(buffer) > 8)
	{
	if (sig == SIGUSR1)
	{
		ft_strlcat(buffer, '1', 1);
		write(1, "1", 1);
	}
	else if (sig == SIGUSR2)
		ft_strlcat(buffer, '0', 1);
		write(1, "0", 1);
	}

}


void transforma(int sig)
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
            	kill(pid, SIGUSR1);
			}
        	else
			{
         	 printf("0");
            	kill(pid, SIGUSR2);}
        	i--;
        	str[j] = str[j] << 1;
			usleep(500);
    	}
		j++;	
	}
}
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
