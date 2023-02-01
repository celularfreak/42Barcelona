/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:23:21 by dnunez-m          #+#    #+#             */
/*   Updated: 2023/02/01 11:10:55 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	init_stacks(t_vars *master, int argc, char **argv)
{
	int		i;
	int		temp;

	i = 0;
	master->stack_a_size = argc - 1;
	master->stack_b_size = 0;
	master->min = 1;
	master->max = argc - 1;
	temp = argc - 1;
	master->stack_a = ft_calloc((master->stack_a_size), sizeof(int));
	master->stack_b = ft_calloc((master->stack_a_size), sizeof(int));
	master->temp_stack = ft_calloc((master->stack_a_size), sizeof(int));
	if (!master->stack_a || !master->stack_b || !master->temp_stack)
		exit(0);
	while (temp > 0)
	{
		master->temp_stack[i] = ft_atoi(argv[i + 1]);
		temp--;
		i++;
	}
}
