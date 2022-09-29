/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:27:08 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/29 10:47:34 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_vars *master)
{
	int	i;

	i = 0;
	while (i < master->stack_a_size - 1)
	{
		swap(&master->stack_a[i], &master->stack_a[i + 1]);
	}
	i = 0;
	while (i < master->stack_b_size - 1)
	{
		swap(&master->stack_b[i], &master->stack_b[i + 1]);
		i++;
	}
	write(1, "rr\n", 3);
}