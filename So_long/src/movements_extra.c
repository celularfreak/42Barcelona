/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_extra.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:23:07 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/07/14 18:05:06 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	num_mov(t_vars *master)
{
	master->num_mov++;
	ft_printf("Movement: %d\r", master->num_mov);
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

int	free_exit(t_vars *master)
{
	int	i;

	i = 0;
	if (master->num_mov > 0)
		ft_printf("\n");
	mlx_destroy_window(master->mlx, master->win);
	while (master->map[i] != NULL)
		free(master->map[i++]);
	free (master->map);
	exit(0);
}
