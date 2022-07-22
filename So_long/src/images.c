/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   images.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:27:27 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/07/22 12:10:31 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include "../mlx/mlx.h"

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
	int	k[2];

	k[0] = -1;
	master->total_ring = 0;
	while (++k[0] <= (x - 1))
	{
		k[1] = -1;
		while (++k[1] <= (y - 1))
		{
			put_image(master, master->ground, k[0], k[1]);
			if (master->map[k[1]][k[0]] == 'P')
				put_image(master, master->sonic, k[0], k[1]);
			if (master->map[k[1]][k[0]] == '1')
				put_image(master, master->rocks, k[0], k[1]);
			if (master->map[k[1]][k[0]] == 'C')
				put_image(master, master->ring, k[0], k[1]);
			if (master->map[k[1]][k[0]] == 'E')
				put_image(master, master->door, k[0], k[1]);
		}
	}
}

void	put_image(t_vars *master, void *img, int x, int y)
{
	mlx_put_image_to_window(master->mlx, master->win, img, x * SIZE, y * SIZE);
	if (img == master->sonic)
	{
		master->player_pos_x = x;
		master->player_pos_y = y;
	}
	if (img == master->ring)
		master->total_ring++;
}
