/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:51:24 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/10/03 15:49:41 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_vars *master)
{
	if (master->stack_a[0] > master->stack_a[3]
		&& master->stack_a[1] > master->stack_a[3]
		&& master->stack_a[2] > master->stack_a[3])
		rra(master);
	if (master->stack_a[0] < master->stack_a[1]
		&& master->stack_a[0] < master->stack_a[2]
		&& master->stack_a[0] < master->stack_a[3])
		pb(master);
	if (master->stack_a[0] > master->stack_a[1]
		&& master->stack_a[1] < master->stack_a[2]
		&& master->stack_a[1] < master->stack_a[3])
	{
		sa(master);
		pb(master);
	}
	if (master->stack_a[0] > master->stack_a[2]
		&& master->stack_a[1] > master->stack_a[2]
		&& master->stack_a[2] > master->stack_a[3])
	{
		ra(master);
		ra(master);
		pb(master);
	}
	if (master->stack_a_size == 3)
	{
		sort_three(master);
		pa(master);
	}
}
