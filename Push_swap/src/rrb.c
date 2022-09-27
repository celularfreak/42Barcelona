/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:35:04 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/27 17:35:26 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_vars *master)
{
	int	i;

	i = 0;
	while (i < master->size_b)
	{
		master->stack_b[i] = master->stack_b[i - 1];
		i++;
	}
	write(1, "rrb\n", 4);
}
