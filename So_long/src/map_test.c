/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:00:56 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/07/14 09:47:39 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	rectangle_test(char **map)
{
	size_t	size;
	int		i;

	i = 0;
	size = 0;
	while (i < arr_lenght(map))
	{
		if (i == 0)
			size = ft_strlen(map[i]);
		else if (size != ft_strlen(map[i]) && i < arr_lenght(map) - 1)
			error_msg("Error: Map is not rectangular");
		else if (size != ft_strlen(map[i]) + 1 && i == arr_lenght(map) - 1)
			error_msg("Error: Map is not rectangular");
		i++;
	}
	return (1);
}

int	close_test(char **map)
{
	size_t	i;
	int		j;

	i = 0;
	while (i < (ft_strlen(map[0]) - 1))
	{
		if (map[0][i] != '1' || map[(arr_lenght(map) - 1)][i] != '1')
			error_msg("Error: Map is not closed");
		i++;
	}
	j = 1;
	while (j < (arr_lenght(map) - 1))
	{
		if (map[j][0] != '1' || map[j][(ft_strlen(map[0]) - 2)] != '1')
			error_msg("Error: Map is not closed");
		j++;
	}
	return (1);
}

int	item_test(char **map, char item)
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

int	no_valid_item_test(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != '0' && map[i][j] != '1' &&
					map[i][j] != 'C' && map[i][j] != 'P' &&
					map[i][j] != 'E' && map[i][j] != '\n')
				error_msg("Error: Map has invalid item");
			j++;
		}
		i++;
	}
	return (1);
}

void	map_tester(char **map)
{		
	rectangle_test(map);
	close_test(map);
	no_valid_item_test(map);
	if (item_test(map, 'P') != 1)
		error_msg("Error: Map must have one player");
	if (item_test(map, 'E') != 1)
		error_msg("Error: Map must have one exit");
	if (item_test(map, 'C') == 0)
		error_msg("Error: Map must have at least one checkpoint");
}
