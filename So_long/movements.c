/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:35:54 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/06/15 09:29:24 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_press(int keycode, t_character *character, t_vars *master)
{
	char	new_position;

	if (keycode == 13 || keycode == 126)
		new_position = master->map[character->x - 1][character->y];
	if (keycode == 97 || keycode == 65)
		new_position = master->map[character->x + 1][character->y];
	if (keycode == 119 || keycode == 87)
		new_position = master->map[character->x][character->y - 1];
	if (keycode == 115 || keycode == 83)
		new_position = master->map[character->x][character->y + 1];
	if (new_position == '1')
		return (0);
	return (1);
}
