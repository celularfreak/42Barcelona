/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:13:16 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/29 10:47:02 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_vars *master)
{
	int	i;

	i = 0;
	while (i < master->stack_a_size - 1)
	{
		swap(&master->stack_a[i], &master->stack_a[i + 1]);
		i++;
	}
	write(1, "ra\n", 3);
}
