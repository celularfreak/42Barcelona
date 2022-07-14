/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsig_printf.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:46:54 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/15 11:35:39 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_printf.h"

unsigned int	ft_putnbr_unsig_printf(unsigned int n)
{
	int		size;
	char	*num;

	size = 0;
	if (n == 0)
		size += write(1, "0", 1);
	else
	{
		num = ft_itoa_unsigned(n);
		size = ft_putstr_printf(num);
		free(num);
	}
	return (size);
}
