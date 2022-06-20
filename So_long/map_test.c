/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:00:56 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/06/20 14:06:38 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	rectangle_test(char **map)
{
	size_t	size;
	int		i;
	int		len;

	i = 0;
	size = 0;
	len = arr_lenght(map);
	while (i < len)
	{
		if (i == 0)
			size = ft_strlen(map[i]);
		else if (ft_strlen(map[i]) != size && i < len - 1)
			return (0);
		else if (ft_strlen(map[i]) != size && i == len - 1)
			return (0);
		i++;
	}
	return (1);
}

int	close_test(char **map)
{
	int	i;
	int	len;

	i = 0;
	len = arr_lenght(map);
	while (i < len)
	{
		if (map[i][0] == '\0')
			return (0);
		i++;
	}
	return (1);
}

int	item_count(char **map, char item)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == item)
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

void	map_tester(char *map)
{
	int	error;

	errors = 0;
	if (rectangle_test(map == 0)
		errors++;
	if (error > 1)
	