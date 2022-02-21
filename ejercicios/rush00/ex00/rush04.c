/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscorcel <fscorcel@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:53:41 by fscorcel          #+#    #+#             */
/*   Updated: 2021/10/31 10:42:54 by dnunez-m         ###   ########.fr       */
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
			if (f == 1 && c == 1)
				ft_putchar('A');
			else if ((f == y && c == 1) || (f == 1 && c == x))
				ft_putchar('C');
			else if ((c == y && f == x) || (c == x && f == y))
				ft_putchar('A');
			else if ((c == 1 || c == x) || (f == 1 || f == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
