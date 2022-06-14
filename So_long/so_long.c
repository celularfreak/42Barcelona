/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:32:44 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/06/14 14:58:55 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{	
	t_vars		master;

	if (argc == 1)
		return (0);
	master.map = map_opp(argv[1]);
	master.mlx = mlx_init();
	ini_img(&master);
	if(!master.ground)
		write(1, "Error loading ground image\n", 26);
	master.size_w = (ft_strlen(master.map[0]) - 1);
	master.size_h = arr_lenght(master.map);	
	master.win = mlx_new_window(master.mlx, master.size_w * SIZE, master.size_h * SIZE, "So Long, and Thanks for All the Fish");
	ins_img(&master, master.size_w, master.size_h);
	//mlx_hook(master.win, 2, 0, events, &master);
	mlx_loop(master.mlx);
}
	