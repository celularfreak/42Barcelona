/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:57:26 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/10/03 09:41:51 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_vars *master)
{
	if (master->stack_a[0] > master->stack_a[1]
		&& master->stack_a[0] < master->stack_a[2])
		sa(master);
	else if (master->stack_a[0] > master->stack_a[1]
		&& master->stack_a[1] > master->stack_a[2])
	{
		sa(master);
		rra(master);
	}
	else if (master->stack_a[0] > master->stack_a[1]
		&& master->stack_a[0] > master->stack_a[2])
		ra(master);
	else if (master->stack_a[0] < master->stack_a[1]
		&& master->stack_a[0] < master->stack_a[2])
	{
		sa(master);
		ra(master);
	}
	else if (master->stack_a[0] < master->stack_a[1]
		&& master->stack_a[0] > master->stack_a[2])
		rra(master);
}
