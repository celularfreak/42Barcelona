/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avila-ca <avila-ca@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:27:28 by avila-ca          #+#    #+#             */
/*   Updated: 2021/11/14 22:43:14 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_number(char *num, char **diccionario)
{
	int		count;
	int		size;
	char	unit[2];

	count = -1;
	size = ft_strlen (num);
	while (++count < size)
	{
		if ((size - count) % 3 == 0)
			print_hundred(&num[count], diccionario);
		if ((size - count) % 3 == 2)
			print_tens(&num[count], diccionario);
		if ((size - count) % 3 == 1 && num[count - 1] != '1')
		{
			unit[0] = num[count];
			unit[1] = 0;
			print_units(unit, diccionario);
		}
		if ((size - count) % 3 == 1)
		{
			ft_enlace((size - count) / 3, diccionario);
		}
	}
}

void	ft_enlace(int size, char **diccionario)
{	
	if (size == 3)
		print_units("1000000000", diccionario);
	else if (size == 2)
		print_units("1000000", diccionario);
	else if (size == 1)
		print_units("1000", diccionario);
}

void	print_hundred(char *str, char **diccionario)
{
	char	size[1];

	if (*str != '0')
	{
		size[0] = *str;
		print_units(size, diccionario);
		print_units("100", diccionario);
	}
}

void	print_tens(char *str, char **diccionario)
{
	char	size[3];

	if (*str == '1')
	{
		size[0] = *str;
		size[1] = *(str + 1);
		size[2] = '\0';
		print_units(size, diccionario);
	}
	else
	{
		size[0] = str[0];
		size[1] = '0';
		size[2] = '\0';
		print_units(size, diccionario);
	}
}

void	print_units(char *str, char **diccionario)
{
	if (*str != '0')
	{
		while (*diccionario)
		{
			ft_putstring((ft_strcmp(*diccionario, str)));
			diccionario++;
		}
		write(1, " ", 1);
	}
}
