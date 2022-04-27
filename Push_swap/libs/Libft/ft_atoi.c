/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:45:40 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/04/01 12:11:46 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	spc_atoi(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int						i;
	int						mult;
	unsigned int			num;

	num = 0;
	mult = 1;
	i = spc_atoi(str);
	if (str[i] == '-')
	{
		mult *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (num > 2147483647 && mult == 1)
			return (-1);
		if (num > 2147483648 && mult == -1)
			return (0);
		num = num * 10 + (str[i++] - 48);
	}
	return (num * mult);
}
