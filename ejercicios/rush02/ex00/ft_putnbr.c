/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avila-ca <avila-ca@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:18:02 by avila-ca          #+#    #+#             */
/*   Updated: 2021/11/14 10:49:25 by avila-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_positive_int(int nb)
{
	if (nb == -2147483648)
		nb++;
	nb = nb * -1;
	return (nb);
}

void	ft_addchain(char *str, int x, int nb, int max)
{
	if (x == 0 && max != 0)
		str[x] = (nb % 10) + 49;
	else
		str[x] = (nb % 10) + 48;
}

void	print_chain(char sig, char *str, int x)
{
	if (sig != '+')
		ft_putchar(sig);
	while (x > -1)
	{	
		ft_putchar(str[x]);
		x--;
	}
}

void	*ft_putnbr(int nb, char *nc)
{
	int		x;
	char	sig;
	int		max;

	x = 0;
	sig = '+';
	max = 0;
	if (nb == 0)
		nc[x] = nb + 48;
	else if (nb < 0)
	{
		sig = '-';
		max = nb;
		nb = ft_positive_int(nb);
	}
	while (nb != 0)
	{
		ft_addchain(nc, x, nb, max);
		nb /= 10;
		x++;
	}
	return (0);
}
