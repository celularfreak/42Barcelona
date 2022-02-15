/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:30:55 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/15 20:30:55 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_printf.h"

int	ft_ptr_size(uintptr_t num)
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

void	ft_ptr_aux(uintptr_t num)
{
	if (num >= 16)
	{
		ft_ptr_aux(num / 16);
		ft_ptr_aux(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}

int	ft_putptr_printf(unsigned long long ptr)
{
	int	size;

	size = 0;
	size += write(1, "0x", 2);
	if (ptr == 0)
		size += write(1, "0", 1);
	else
	{
		ft_ptr_aux(ptr);
		size += ft_ptr_size(ptr);
	}
	return (size);
}