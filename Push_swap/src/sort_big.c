/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:43:33 by dnunez-m          #+#    #+#             */
/*   Updated: 2023/02/01 10:50:42 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_big(t_vars *master)
{
	int max_num;
	int max_bits;
	int k[2];
	int num;
	
	max_num = master->stack_a_size;
	max_bits = 0;
	k[0] = -1;
	while ((max_num >> max_bits) != 0)
		++max_bits;
	while(++k[0] < max_bits)
	{
		k[1] = -1;
		while (++k[1] < master->stack_a_size)
		{
			num = master->stack_a[0];
			if (((num >> k[1]) & 1) == 1)
				ra(master);
			else
				pb(master);
		}
		while(master->stack_b_size != 0)
			pa(master);
	}
}