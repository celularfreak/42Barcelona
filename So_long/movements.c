/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:35:54 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/06/14 14:57:23 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_press(int keycode, t_character *character)
{
	/* if (keycode == 27)
		exit(0);
		*/
	if (keycode == 100 || keycode == 68)
		character->x -= SIZE;
	if (keycode == 97 || keycode == 65)
		character->x += SIZE;
	if (keycode == 119 || keycode == 87)
		character->y += SIZE;
	if (keycode == 115 || keycode == 83)
		character->y -= SIZE;
	return (0);
}

/*int	events(int keycode, t_vars *master)
{
	char	dir;

	//free_img(vars);
	mlx_clear_window(master->mlx, master->win);
	dir = key_press(keycode);
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
}*/
