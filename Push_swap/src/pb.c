/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:38:51 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/29 12:03:44 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_vars *master)
{
	int	i;

	i = master->stack_b_size;
	printf("master->stack_a_size: %d", i);
	printf("master->stack_b_size: %d", master->stack_b_size);
	master->stack_a_size--;
	printf("master->stack_a_size: %d", master->stack_a_size);
	master->stack_b_size++;
	printf("master->stack_b_size: %d", master->stack_b_size);
	while (i > 0)
	{
		swap(&master->stack_b[i], &master->stack_a[i - 1]);
		i--;
	}
	master->stack_b[0] = master->stack_a[0];
	i = 0;
	while (i < master->stack_a_size)
	{
		master->stack_a[i] = master->stack_a[i + 1];
		i++;
	}
	write(1, "pb\n", 3);
}
