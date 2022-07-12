/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:35:54 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/07/12 10:59:25 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	player_pos(char **map, t_vars *master)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
			{
				i = master->player_pos_x;
				j = master->player_pos_y;
			}
			j++;
		}
		i++;
	}
}

char	key_press(int keycode, t_vars *master)
{
	if (keycode == 13 || keycode == 126)
	{
		master->player_pos_y++;
		return ("W");
	}
	if (keycode == 0 || keycode == 123)
		{
			master->player_pos_x--;
			return ("A");
		}
	if (keycode == 1 || keycode == 125)
		{
			master->player_pos_y--;
			return ("S");
		}
	if (keycode == 2 || keycode == 124)
		
		return ("D");
	if (keycode == 53)
	{
		mlx_destroy_window(master->mlx, master->win);
		exit(0);
	}
	return (0);

}

void map_mov(t_vars *master)
{
}
