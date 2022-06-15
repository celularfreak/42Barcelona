/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:35:54 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/06/15 09:42:12 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_press(int keycode, t_character *character, t_vars *master)
{
	char	new_pos;

	if (keycode == 13 || keycode == 126)
		new_pos = master->map[character->x - 1][character->y];
	if (keycode == 97 || keycode == 65)
		new_pos = master->map[character->x + 1][character->y];
	if (keycode == 119 || keycode == 87)
		new_pos = master->map[character->x][character->y - 1];
	if (keycode == 115 || keycode == 83)
		new_pos = master->map[character->x][character->y + 1];
	if (new_pos == '1')
		return (0);
	return (1);
}

/*int	can_move(t_vars *vars, char dir)
{
	char	next_pos;

	if (dir == 'U')
		next_pos = vars->map[vars->character.y - 1][vars->character.x];
	if (dir == 'D')
		next_pos = vars->map[vars->character.y + 1][vars->character.x];
	if (dir == 'L')
		next_pos = vars->map[vars->character.y][vars->character.x - 1];
	if (dir == 'R')
		next_pos = vars->map[vars->character.y][vars->character.x + 1];
	if (next_pos == '1')
		return (0);
	if (next_pos == 'E' && vars->collect > 0)
		return (0);
	return (1);
}

char	get_direction(int keycode)
{
	if (keycode == 13 || keycode == 126)
		return ('U');
	if (keycode == 1 || keycode == 125)
		return ('D');
	if (keycode == 0 || keycode == 123)
		return ('L');
	if (keycode == 2 || keycode == 124)
		return ('R');
	return (' ');
}

void	move_char(t_vars *vars, char dir)
{
	t_coord	coords;

	vars->map[vars->character.y][vars->character.x] = '0';
	coords.x = vars->character.x;
	coords.y = vars->character.y;
	if (dir == 'U')
		coords.y = --vars->character.y;
	if (dir == 'D')
		coords.y = ++vars->character.y;
	if (dir == 'L')
		coords.x = --vars->character.x;
	if (dir == 'R')
		coords.x = ++vars->character.x;
		vars->character.x++;
	if (vars->map[coords.y][coords.x] == 'E' && vars->collect == 0)
		exit(0);
	vars->map[coords.y][coords.x] = 'P';
}

int	events(int keycode, t_vars *vars)
{
	char	dir;

	free_img(vars);
	mlx_clear_window(vars->mlx, vars->win);
	dir = get_direction(keycode);
	if (dir != ' ')
	{
		vars->character.direction = dir;
		if (can_move(vars, vars->character.direction) == 1)
		{
			move_char(vars, vars->character.direction);
			printf("Movements: %i\n", ++vars->movements);
		}
	}
	if (vars->map[vars->character.y][vars->character.x] == 'E'
		&& vars->collect == 0)
		exit(0);
	if (keycode == 53)
	{
		mlx_destroy_window(vars->mlx, vars->win);
		exit(0);
	}
	print_map(vars);
	return (0);
}

int	close_event(int keycode, t_vars *vars)
{
	exit(0);
	printf("%i,%i", keycode, vars->character.x);
}
*/