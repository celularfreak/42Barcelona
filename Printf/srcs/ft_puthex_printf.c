/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:40:41 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/17 00:29:23 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_printf.h"

int	ft_hex_size(unsigned	int num)
{
	int	size;

	size = 0;
	while (num != 0)
	{
		size++;
		num /= 16;
	}
	return (size);
}

void	ft_hex_aux(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_hex_aux(num / 16, format);
		ft_hex_aux(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
		{
			if (format == 'x')
				ft_putchar(num - 10 + 'a');
			if (format == 'X')
				ft_putchar(num - 10 + 'A');
		}
	}
}

int	ft_puthex_printf(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_hex_aux(num, format);
	return (ft_hex_size(num));
}
