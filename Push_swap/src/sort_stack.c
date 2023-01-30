/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:09:59 by dnunez-m          #+#    #+#             */
/*   Updated: 2023/01/30 20:10:00 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_vars *master)
{
	int	cont_g;
	int	cont_p;
	int	nbr;

	cont_g = 0;
	cont_p = 0;
	nbr = 1;
	while (cont_g < master->stack_a_size)
	{
		cont_p = 0;
		nbr = 1;
		while (cont_p < master->stack_a_size)
		{
			if ((master->temp_stack[cont_p] < master->temp_stack[cont_g]))
				nbr++;
			cont_p++;
		}
		master->stack_a[cont_g] = nbr;
		cont_g++;
	}
}
