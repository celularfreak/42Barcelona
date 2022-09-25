/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:09:59 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/26 00:20:21 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_stack(t_vars *master, int argc)
{
	int	cont_g;
	int	cont_p;
	int	nbr;

	cont_g = 0;
	cont_p = 0;
	nbr = 1;
	while (cont_g < argc -1)
	{
		cont_p = 0;
		nbr = 1;
		while (cont_p < argc -1)
		{
			if ((master->temp_stack[cont_p] < master->temp_stack[cont_g]))
				nbr++;
			cont_p++;
		}
		master->stack_a[cont_g] = nbr;
		cont_g++;
	}
}
