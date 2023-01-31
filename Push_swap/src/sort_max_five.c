/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_max_five.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:51:24 by dnunez-m          #+#    #+#             */
/*   Updated: 2023/01/31 10:21:37 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_max_five(t_vars *master)
{
	int		min;
	int		max;

	min = master->min;
	max = master->max;
	while (master->stack_a[0] != min)
	{
		if (master->stack_a[max - 1] == min || master->stack_a[max - 2] == min)
			rra(master);
		else
			ra(master);
	}
	pb(master);
	min++;
	while (master->stack_a[0] != max)
	{
		if (master->stack_a[max - 1] == max || master->stack_a[max - 2] == max)
			rra(master);
		else
			ra(master);
	}
	pb(master);
	max--;
	sort_three(master);
	pa(master);
	ra(master);
	pa(master);
}
