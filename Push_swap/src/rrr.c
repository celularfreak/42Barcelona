/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:36:32 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/27 17:37:03 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	rrr(t_vars *master)
{
	int	i;

	i = 0;
	while (i < master->size_a)
	{
		master->stack_a[i] = master->stack_a[i - 1];
		i++;
	}
	i = 0;
	while (i < master->size_b)
	{
		master->stack_b[i] = master->stack_b[i - 1];
		i++;
	}
	write(1, "rrr\n", 4);
}
