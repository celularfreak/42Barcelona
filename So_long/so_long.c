/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:32:44 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/13 12:38:11 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "./libft/libft.h"
#include "./mlx/mlx.h"

int	main(int argc, char **argv)
{	
	t_vars		master;
	char		*end;

	if (argc != 2)
		error_msg("Usage: ./so_long <map>");
	end = ft_strrchr(argv[1], '.');
	if (!end)
		error_msg("Map file must have a .ber extension");
	if (ft_strncmp(end, ".ber", 3) == 0 && !(ft_strlen(end) > 4))
	{
		master.map = map_opp(argv[1]);
		map_tester(master.map);
		master.mlx = mlx_init();
		ini_img(&master);
		master.size_w = (ft_strlen(master.map[0]) - 1);
		master.size_h = arr_lenght(master.map);
		master.win = mlx_new_window(master.mlx, master.size_w * SIZE,
				master.size_h * SIZE, "So Long, and Thanks for All the Fish");
		ins_img(&master, master.size_w, master.size_h);
		mlx_key_hook(master.win, key_press, &master);
		mlx_hook(master.win, 17, 0, free_exit, &master);
		mlx_loop(master.mlx);
	}
	else
		error_msg("File is not a .ber file");
}
