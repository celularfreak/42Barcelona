/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:37:22 by dnunez-m          #+#    #+#             */
/*   Updated: 2023/01/30 20:36:44 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_vars *master)
{
	int	i;

	i = master->stack_a_size;
	master->stack_b_size = master->stack_b_size - 1;
	master->stack_a_size = master->stack_a_size + 1;
	while (i > 0)
	{
		swap(&master->stack_a[i], &master->stack_a[i - 1]);
		i--;
	}
	master->stack_a[0] = master->stack_b[0];
	i = 0;
	while (i <= master->stack_b_size - 1)
	{
		master->stack_b[i] =master->stack_b[i + 1];
		i++;
	}
	write(1, "pa\n", 3);
}
