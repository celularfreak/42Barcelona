/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:42:21 by dnunez-m          #+#    #+#             */
/*   Updated: 2021/11/05 13:37:56 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	int	contador;

	i = 0;
	contador = 0;
	while (str[i])
	{
		contador++;
		i++;
	}
	return (contador);
}
