/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:13:00 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/01/31 18:06:39 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(int n)
{	
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		i;

	size = ft_size(n);
	str = ft_calloc(sizeof(char), (size + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		str[0] = '-';
		i = 1;
	}
	while (size-- > i)
	{
		if (n < 0)
			str[size] = '0' + n % 10 * (-1);
		else
			str[size] = '0' + n % 10;
		n = n / 10;
	}
	return (str);
}
