/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_temp_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:09:59 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/22 19:43:18 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order_temp_stack(t_vars *master)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	index = 0;
	while (master->temp_stack[i] != '\0')
	{
		j = 0;
		while (master->temp_stack[j] != '\0')
		{
			if ((master->temp_stack[i] > master->temp_stack[j]))
				index++;
			j++;
		}
		master->stack_a[i] = index;
		index = 0;
		i++;
	}
}
