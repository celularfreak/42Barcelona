/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:13:00 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/15 13:55:51 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_printf.h"

int	ft_size_un(unsigned int n)
{	
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	char	*str;
	int		size;

	size = ft_size_un(n);
	str = ft_calloc(sizeof(char), (size + 1));
	if (!str)
		return (NULL);
	while (n != 0)
	{
		str[size - 1] = '0' + n % 10;
		n = n / 10;
		size--;
	}
	return (str);
}
