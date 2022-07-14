/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_extra.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:23:07 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/07/14 12:07:29 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	num_mov(t_vars *master)
{
	master->num_mov++;
	write(1, "Movement: ", 10);
	ft_putnbr_fd(master->num_mov, 1);
	write(1, "\r", 1);
}

int	can_move(t_vars *master, int x, int y)
{
	if (master->map[master->player_pos_y + y][master->player_pos_x + x] == '0')
		return (1);
	else if (master->map[master->player_pos_y + y]
		[master->player_pos_x + x] == 'C')
		return (1);
	else if (master->map[master->player_pos_y + y]
		[master->player_pos_x + x] == 'E' && master->total_ring == 0)
		return (1);
	else
		return (0);
}

/*int	free_exit(t_vars *master)
{
	//mlx_destroy_window(master->mlx, master->win);
	//free(master->map);
	//free(master);
	exit(0);
}*/
