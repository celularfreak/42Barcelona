/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:15:12 by dnunez-m          #+#    #+#             */
/*   Updated: 2021/11/03 18:12:53 by dnunez-m         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_result( int n)
{
	n += 48;
	write (1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (++a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_result(a / 10);
			print_result(a % 10);
			write(1, " ", 1);
			print_result(b / 10);
			print_result(b % 10);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
	}
}
