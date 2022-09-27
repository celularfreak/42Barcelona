/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:02:14 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/27 17:23:53 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_vars *master)
{
	swap(master->stack_a[0], master->stack_a[1]);
	swap(master->stack_b[0], master->stack_b[1]);
	write(1, "ss\n", 3);
}
