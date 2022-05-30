/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   images.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:27:27 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/05/30 16:33:43 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_vars	*ini_img (t_vars *v)
{
	int size;

	v->ground = mlx_xpm_file_to_image(v->mlx, "./images/ground.xpm", &size, &size);
	v->sonic = mlx_xpm_file_to_image(v->mlx, "./images/sonic.xpm", &size, &size);
	v->rocks = mlx_xpm_file_to_image(v->mlx, "./images/rocks.xpm", &size, &size);
	v->ring = mlx_xpm_file_to_image(v->mlx, "./images/ring.xpm", &size, &size);
	v->door = mlx_xpm_file_to_image(v->mlx, "./images/door.xpm", &size, &size);
	return (v);
}
