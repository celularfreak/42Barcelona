/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:33:26 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/27 17:34:29 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_vars *master)
{
	int	i;

	i = 0;
	while (i < master->size_a)
	{
		master->stack_a[i] = master->stack_a[i - 1];
		i++;
	}
	write(1, "rra\n", 4);
}
