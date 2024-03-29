/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:36:32 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/29 10:48:43 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	rrr(t_vars *master)
{
	int	i;

	i = master->stack_a_size - 1;
	while (i > 0)
	{
		swap(&master->stack_b[i], &master->stack_b[i - 1]);
		i--;
	}
	i = master->stack_b_size - 1;
	while (i > 0)
	{
		swap(&master->stack_b[i], &master->stack_b[i - 1]);
		i--;
	}
	write(1, "rrr\n", 4);
}
