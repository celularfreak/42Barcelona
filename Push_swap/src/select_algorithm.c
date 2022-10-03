/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:45:50 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/10/03 09:44:58 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	select_algorithm(t_vars *master)
{
	if (master->stack_a_size == 2)
		sort_two(master);
	if (master->stack_a_size == 3)
		sort_three(master);
	else if (master->stack_a_size == 4)
		sort_four(master);
	else if (master->stack_a_size == 5)
		sort_five(master);
	//else if (master->stack_size > 5)
		//sort_big(master);
}
