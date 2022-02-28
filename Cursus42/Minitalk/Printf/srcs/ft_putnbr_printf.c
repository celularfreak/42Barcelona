/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:46:54 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/15 11:35:34 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_printf.h"

int	ft_putnbr_printf(int n)
{
	int		size;
	char	*num;

	size = 0;
	num = ft_itoa(n);
	size = ft_putstr_printf(num);
	free(num);
	return (size);
}
