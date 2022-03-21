/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:00:39 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/03/21 11:57:13 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
}

void	listen(int sig, siginfo_t *siginfo, void *context)
{
	static char	buffer = '\0';
	static int	i = 8;
	static int	client_pid = 0;

	(void)context;
	if (siginfo->si_pid)
		client_pid = siginfo->si_pid;
	i--;
	if (sig == SIGUSR1)
		buffer = buffer | (1 << i);
	kill(client_pid, SIGUSR1);
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

	write(1, "Awaiting connection at pid ", 27);
	ft_putnbr(getpid());
	write(1, "\n", 1);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = &listen;
	sigemptyset(&sa.sa_mask);
	sigaddset(&sa.sa_mask, SIGUSR1);
	sigaddset(&sa.sa_mask, SIGUSR2);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
	{
		pause();
	}
	return (0);
}
