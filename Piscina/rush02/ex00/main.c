/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:53:26 by dnunez-m          #+#    #+#             */
/*   Updated: 2021/11/14 21:29:51 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int n, char **params)
{
	char	*charnum;
	char	**diccionario;
	char	**diccionario_orig;

	if (n > 3 || n == 1)
		return (-1);
	if (n == 3)
	{
		diccionario = readfile(params[1]);
		charnum = ft_atoc(params[2]);
	}
	if (n == 2)
	{
		diccionario = readfile("numbers.dict");
		charnum = ft_atoc(params[1]);
	}
	print_number(charnum, diccionario);
	diccionario_orig = diccionario;
	free(diccionario);
}

char	*ft_strcmp(char *s1, char *s2)
{
	int	charlen;

	charlen = ft_strlen(s2);
	while (*s1 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			continue ;
		}
		else if (*s1 == ':' && *s2 == '\0')
		{
			++s1;
			return (s1 + 1);
		}
		return ("");
	}
	return ("");
}
