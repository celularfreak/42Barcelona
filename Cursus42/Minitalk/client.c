/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 08:55:30 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/03/11 15:24:32 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>

int	ft_atoi(const char *str);

void	envio(int pid, char *str)
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
	int	pid;

	pid = ft_atoi(argv[1]);
	envio(pid, argv[2]);
	return (0);
}
