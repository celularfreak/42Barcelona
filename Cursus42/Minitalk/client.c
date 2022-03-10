/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 08:55:30 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/03/10 17:17:11 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/*void	envio(int pid,char *str)

	int	i;
	int	j;
	int	x;

	i = 0;
	while (str[i])
	{
		x = 0;
		j = str[i];
		while (x < 8)
		{
			if (j % 2 == 0)
			{
				kill(pid, SIGUSR2);
				write(1, "0", 1);
			}
			else if (j % 2 != 0)
			{
				kill(pid, SIGUSR1);
				write(1, "1", 1);
			}{
			j /= 2;
			usleep(500);
			x++;
		}
	i++;
	}
}*/

void    envio(int pid, char *str)
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
int	main(int argc, char *argv[])
{
	int	pid;

	pid = ft_atoi(argv[1]);
	envio(pid, argv[2]);
	return (0);
}
