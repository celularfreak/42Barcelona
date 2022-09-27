/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:27:08 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/27 17:34:40 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_vars *master)
{
	int	i;

	i = 0;
	while (i < master->size_a)
	{
		master->stack[i] = master->stack[i - 1];
		i++;
	}
	i = 0;
	while (i < master->size_b)
	{
		master->stack[i] = master->stack[i - 1];
		i++;
	}
	write(1, "rr\n", 3);
}