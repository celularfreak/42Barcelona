/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:43:33 by dnunez-m          #+#    #+#             */
/*   Updated: 2023/02/02 22:02:49 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	max_bits(t_vars *master)
{
	int	max_num;
	int	max_bits;

	max_num = master->stack_a_size;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		++max_bits;
	return (max_bits);
}

void	sort_big(t_vars *master)
{
	int	size;
	int	i;
	int	j;
	int	num;

	size = master->stack_a_size;
	i = 0;
	while (i < max_bits(master))
	{
		j = 0;
		while (j < size)
		{
			num = master->stack_a[0];
			if (((num >> i) & 1) == 1)
				ra(master);
			else
				pb(master);
			++j;
		}
		++i;
		while (master->stack_b_size != 0)
			pa(master);
	}
}
