/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:22:23 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/10/04 12:14:29 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_order(t_vars *master)
{
	int	i;
	int	cont;
	int	temp;

	i = 0;
	cont = 0;
	temp = master->stack_a_size;
	while (i < temp - 1)
	{
		if (master->stack_a[i] < master->stack_a[i + 1])
			cont++;
		i++;
	}
	if (cont == i)
	{
		//write(1, "La cadena ya esta ordenada", 26);
		exit(0);
	}
}
