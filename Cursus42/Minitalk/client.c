/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 08:55:30 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/03/07 15:08:56 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minitalk.h"

int	spc_atoi(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int						i;
	int						mult;
	unsigned int			num;

	num = 0;
	mult = 1;
	i = spc_atoi(str);
	if (str[i] == '-')
	{
		mult *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (num > 2147483647 && mult == 1)
			return (-1);
		if (num > 2147483648 && mult == -1)
			return (0);
		num = num * 10 + (str[i++] - 48);
	}
	return (num * mult);
}

void envio (int pid,char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		
	}

	/*if (s == 1)
		kill(pid, SIGUSR1);
	else if (s == 0)
		kill(pid, SIGUSR2);*/

}

int main(int argc, char *argv[])
{
	int pid;
	int signal;

	pid = ft_atoi(argv[1]);
	envio(pid, argv[2]);
	return 0;
}
