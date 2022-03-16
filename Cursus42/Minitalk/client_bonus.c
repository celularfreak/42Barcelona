/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 08:55:30 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/03/16 17:36:21 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>

int	ft_atoi(const char *str)
{
	int						i;
	unsigned int			num;

	num = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		num = num * 10 + (str[i++] - 48);
	return (num);
}

void	confirm(int sig)
{
	if (sig == SIGUSR1)
		write(1, "Signal received\n", 16);
}

void	send(int pid, char *str)
{
	int	temp;
	int	i;
	int	j;

	j = 0;
	while (str[j])
	{
		i = 7;
		while (i >= 0)
		{
			temp = str[j] & 128;
			if (temp)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			i--;
			str[j] = str[j] << 1;
			usleep(500);
		}
		j++;
	}
}

int	main(int argc, char *argv[])
{
	signal(SIGUSR1, confirm);
	if (argc < 3)
		return (0);
	send(ft_atoi(argv[1]), argv[2]);
	return (0);
}
