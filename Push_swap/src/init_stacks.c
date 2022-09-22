/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:23:21 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/21 12:09:39 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	init_stacks(t_vars *master, int argc, char **argv)
{
	int		i;

	i = 0;
	master->stack_a = ft_calloc((argc - 1), sizeof(int));
	master->stack_b = ft_calloc((argc - 1), sizeof(int));
	master->temp_stack = ft_calloc((argc - 1), sizeof(int));
	if (!master->stack_a || !master->stack_b || !master->temp_stack)
		exit(0);
	while (argc > 1)
	{
		master->temp_stack[i] = ft_atoi(argv[i + 1]);
		argc--;
		i++;
	}
}
