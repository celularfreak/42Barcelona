/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:23:21 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/28 14:47:27 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	init_stacks(t_vars *master, int argc, char **argv)
{
	int		i;
	int		temp;


	i = 0;
	master->stack_size = argc - 1;
	temp = master->stack_size;
	master->stack_a = ft_calloc((master->stack_size), sizeof(int));
	master->stack_b = ft_calloc((master->stack_size), sizeof(int));
	master->temp_stack = ft_calloc((master->stack_size), sizeof(int));
	if (!master->stack_a || !master->stack_b || !master->temp_stack)
		exit(0);
	while (temp > 0)
	{
		master->temp_stack[i] = ft_atoi(argv[i + 1]);
		temp--;
		i++;
	}
}
