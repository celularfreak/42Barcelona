/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:00:56 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/06/22 10:24:43 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
			return (0);
		else if (size != ft_strlen(map[i]) + 1 && i == arr_lenght(map) - 1)
			return (0);
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
			return (0);
		i++;
	}
	j = 1;
	while (j < (arr_lenght(map) - 1))
	{
		if (map[j][0] != '1' || map[j][(ft_strlen(map[0]) - 2)] != '1')
			return (0);
		j++;
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

void	map_tester(char **map)
{
	int		bug;

	bug = 0;
	if (rectangle_test(map) == 0)
	{
		bug++;
		printf("Map must be a rectangle\n");
	}
	if (close_test(map) == 0)
	{
		bug++;
		printf("Map must be closed\n");
	}
	if (bug >= 1)
	 {
		printf("%d bugs found\n", bug);
		exit (0);
		//bug += printf("Map is not valid\n");
	 }
}
