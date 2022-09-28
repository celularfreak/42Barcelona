/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:25:16 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/28 15:26:50 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_vars *master)
{
	int	i;

	i = 0;
	while (i < master->stack_size - 1)
	{
		swap(&master->stack_b[i], &master->stack_b[i + 1]);
		i++;
	}
	write(1, "rb\n", 3);
}
