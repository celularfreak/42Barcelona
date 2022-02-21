/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avila-ca <avila-ca@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 09:58:13 by avila-ca          #+#    #+#             */
/*   Updated: 2021/11/14 10:12:23 by avila-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_atoc(const char *str)
{
	char	*dest;
	int		i;
	int		n;
	int		it;

	dest = (char *)malloc(sizeof(char) * 11);
	i = 0;
	n = 1;
	it = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
	dest[it] = str[i];
	i++;
	it++;
	}
	return (dest);
}
