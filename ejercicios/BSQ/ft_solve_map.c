/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:17:35 by dnunez-m          #+#    #+#             */
/*   Updated: 2021/11/17 18:58:46 by aigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "read.h"

int	ft_low_number(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	else
		return (c);
}

struct s_result ft_find_square(struct s_map_config config, int **map)
{
	struct s_resullt result;
	int	x;
	int	y;
	int count;

	count = 0;
	y = 0;
	result = ft_update_result(0. 0, 0);
	while (y < config.lines)
	{
		if (map[y][x] != 0 && x != 0 && y != 0)
			map[y][x] = ft_low_num(map[y -1][x - 1], map[y][x - 1], map[y - 1][x]) + 1;
		if (map[y][x] > count)
		{
			count = map[y][x];
			result = ft_update_result(count, x, y);
		}
		x++;
	}
	y++;
	return (result);
}

struct s_result ft_update_result(int count, int x, int y)
{
	struct s_result result;

	result.x = x - (count - 1);
	result.y = y - (count - 1);
	result.count = count;
	return (result);
}
