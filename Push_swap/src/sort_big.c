/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:43:33 by dnunez-m          #+#    #+#             */
/*   Updated: 2023/01/30 21:11:44 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_big(t_vars *master)
{
	int size;
	int max_num;
	int max_bits;
	int i;
	int j;
	int num;
	
	size = master->stack_a_size;
	max_num = size - 1;
	max_bits = 0;
	i = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	while(i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			num = master->stack_a[0];
			if (((num >> i) & 1) == 1)
				ra(master);
			else
				pb(master);
			j++;
		}
		i++;
		while(master->stack_b_size != 0)
			pa(master);
	}
}