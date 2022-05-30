/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:32:44 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/05/30 17:07:11 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{	
	t_vars	master;

	if (argc == 1)
		return (0);
	master.map = map_opp(argv[1]);
	ini_img(&master);
	master.size_w = (ft_strlen(master.map[0]) - 1);
	master.size_h = (arr_lenght(master.map) - 1);
	master.mlx = mlx_init();
	master.win = mlx_new_window(master.mlx, master.size_w * SIZE, master.size_h * SIZE, "So Long, and Thanks for All the Fish");
	mlx_loop(master.mlx);
	return (0);
}
	