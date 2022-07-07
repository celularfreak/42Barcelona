/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:35:54 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/07/07 12:07:01 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_press(int keycode, t_character *character, t_vars *master)
{
	//char	new_pos;

	if (keycode == 13 || keycode == 126) //w
		//new_pos = master->map[character->x - 1][character->y];
		write(1, "w", 1);
	if (keycode == 0 || keycode == 123) //a
		//new_pos = master->map[character->x + 1][character->y]; 
		write(1, "a", 1);
	if (keycode == 1 || keycode == 125)//s
		//new_pos = master->map[character->x][character->y - 1];
		write(1, "s", 1);
	if (keycode == 2 || keycode == 124)//d
		//new_pos = master->map[character->x][character->y + 1];
		write(1, "d", 1);
	if (keycode == 53)//esc
		{
			mlx_destroy_window(master->mlx, master->win);
			exit(0);
		}
	return (0);

}
