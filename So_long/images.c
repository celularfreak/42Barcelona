/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   images.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:27:27 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/06/02 14:42:31 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_vars	*ini_img(t_vars *master)
{
	int	size;

	master->ground = mlx_xpm_file_to_image(master->mlx,
			"img/hierba.xpm", &size, &size);
	master->sonic = mlx_xpm_file_to_image(master->mlx,
			"img/Sonic.xpm", &size, &size);
	master->rocks = mlx_xpm_file_to_image(master->mlx,
			"img/piedra.xpm", &size, &size);
	master->ring = mlx_xpm_file_to_image(master->mlx,
			"img/anillo1.xpm", &size, &size);
	master->door = mlx_xpm_file_to_image(master->mlx,
			"img/vortice.xpm", &size, &size);
	return (master);
}

void	ins_img(t_vars *master, int x, int y)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= (x - 1))
	{
		j = -1;
		while (++j <= (y - 1))
		{
			mlx_put_image_to_window(master->mlx, master->win,
				master->ground, i * SIZE, j * SIZE);
			if (master->map[j][i] == 'P')
				mlx_put_image_to_window(master->mlx,
					master->win, master->sonic, i * SIZE, j * SIZE);
			if (master->map[j][i] == '1')
				mlx_put_image_to_window(master->mlx,
					master->win, master->rocks, i * SIZE, j * SIZE);
			if (master->map[j][i] == 'C')
				mlx_put_image_to_window(master->mlx,
					master->win, master->ring, i * SIZE, j * SIZE);
			if (master->map[j][i] == 'E')
				mlx_put_image_to_window(master->mlx,
					master->win, master->door, i * SIZE, j * SIZE);
		}
	}
}
