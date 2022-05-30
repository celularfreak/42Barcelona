/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   images.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:27:27 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/05/30 16:49:04 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_vars	*ini_img (t_vars *main)
{
	int size;

	main->ground = mlx_xpm_file_to_image(main->mlx, "./images/ground.xpm", &size, &size);
	main->sonic = mlx_xpm_file_to_image(main->mlx, "./images/sonic.xpm", &size, &size);
	main->rocks = mlx_xpm_file_to_image(main->mlx, "./images/rocks.xpm", &size, &size);
	main->ring = mlx_xpm_file_to_image(main->mlx, "./images/ring.xpm", &size, &size);
	main->door = mlx_xpm_file_to_image(main->mlx, "./images/door.xpm", &size, &size);
	return (main);
}
