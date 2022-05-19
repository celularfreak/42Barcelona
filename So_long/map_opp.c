/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_opp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:24:37 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/05/19 10:38:26 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	array_str_count(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
		i++;
	return (i);
}

char	**line_add(char **arr, char *str)
{
	int		i;
	int		n;
	char	**new;

	i = 0;
	n = array_str_count(arr);
	new = ft_calloc(sizeof(char *), n + 2);
	while (i < n)
	{
		new[i] = arr[i];
		i++;
	}
	new[i] = str;
	free(arr);
	return (new);
}