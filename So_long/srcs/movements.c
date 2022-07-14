/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:35:54 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/07/14 12:31:59 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	key_press(int keycode, t_vars *master)
{
	if (keycode == 13 || keycode == 126)
		key_up(master);
	if (keycode == 0 || keycode == 123)
		key_left(master);
	if (keycode == 1 || keycode == 125)
		key_down(master);
	if (keycode == 2 || keycode == 124)
		key_right(master);
	if (keycode == 53)
		exit(0);
	return (0);
}

void	key_up(t_vars *master)
{
	if (can_move(master, 0, -1) == 1)
	{
		if (master->map[master->player_pos_y - 1][master->player_pos_x] == 'C')
			master->total_ring--;
		if (master->map[master->player_pos_y - 1]
			[master->player_pos_x] == 'E' && master->total_ring == 0)
		{
			num_mov(master);
			exit(0);
		}
		master->player_pos_y--;
		num_mov(master);
		master->map[master->player_pos_y][master->player_pos_x] = 'P';
		master->map[master->player_pos_y + 1][master->player_pos_x] = '0';
	}
	ins_img(master, master->size_w, master->size_h);
}

void	key_left(t_vars *master)
{
	if (can_move(master, -1, 0) == 1)
	{
		if (master->map[master->player_pos_y][master->player_pos_x - 1] == 'C')
			master->total_ring--;
		if (master->map[master->player_pos_y][master->player_pos_x - 1] == 'E'
			&& master->total_ring == 0)
		{
			num_mov(master);
			exit(0);
		}
		master->player_pos_x--;
		num_mov(master);
		master->map[master->player_pos_y][master->player_pos_x] = 'P';
		master->map[master->player_pos_y][master->player_pos_x + 1] = '0';
	}
	ins_img(master, master->size_w, master->size_h);
}

void	key_right(t_vars *master)
{
	if (can_move(master, 1, 0) == 1)
	{
		if (master->map[master->player_pos_y][master->player_pos_x + 1] == 'C')
			master->total_ring--;
		if (master->map[master->player_pos_y][master->player_pos_x + 1] == 'E'
			&& master->total_ring == 0)
		{
			num_mov(master);
			exit(0);
		}
		master->player_pos_x++;
		num_mov(master);
		master->map[master->player_pos_y][master->player_pos_x] = 'P';
		master->map[master->player_pos_y][master->player_pos_x - 1] = '0';
	}
	ins_img(master, master->size_w, master->size_h);
}

void	key_down(t_vars *master)
{
	if (can_move(master, 0, 1) == 1)
	{
		if (master->map[master->player_pos_y + 1][master->player_pos_x] == 'C')
			master->total_ring--;
		if (master->map[master->player_pos_y + 1][master->player_pos_x] == 'E'
			&& master->total_ring == 0)
		{
			num_mov(master);
			exit(0);
		}
		master->player_pos_y++;
		num_mov(master);
		master->map[master->player_pos_y][master->player_pos_x] = 'P';
		master->map[master->player_pos_y - 1][master->player_pos_x] = '0';
	}
	ins_img(master, master->size_w, master->size_h);
}

