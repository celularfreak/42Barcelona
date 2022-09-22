/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_temp_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:09:59 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/22 18:44:37 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order_temp_stack(t_vars *master, int argc)
{
	int	j;
	int	temp;

	j = 0;
	while (++j < (argc - 1))
	{
		if (master->temp_stack[j] < master->temp_stack[j - 1])
		{
			temp = master->temp_stack[j];
			master->temp_stack[j] = master->temp_stack[j - 1];
			master->temp_stack[j - 1] = temp;
			j = 0;
		}
	}
}
