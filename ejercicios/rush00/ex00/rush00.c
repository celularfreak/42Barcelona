/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscorcel <fscorcel@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:53:41 by fscorcel          #+#    #+#             */
/*   Updated: 2021/10/31 10:56:02 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	f;

	if (x < 1 || y < 1)
		return ;
	f = 0;
	while (++f <= y)
	{
		c = 0;
		while (++c <= x)
		{
			if ((c > 1 && c < x) && (f == 1 || f == y))
				ft_putchar('-');
			else if ((f > 1 && f < y) && (c == 1 || c == x))
				ft_putchar(('|'));
			else if ((f > 1 && f < y) && (c > 1 && c < x))
				ft_putchar(' ');
			else
				ft_putchar('o');
		}
		ft_putchar('\n');
	}
}
