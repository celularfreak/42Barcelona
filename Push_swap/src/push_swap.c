/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:21:57 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/22 18:23:18 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	t_vars	master;
	int i;

	i = 0;
	if (argc == 1)
		return (0);
	if (argv_check(argc, argv) == 1)
		exit(0);
	init_stacks(&master, argc, argv);
	order_temp_stack(&master, argc);
	while (i < (argc - 1))
	{
		printf("%d ", master.temp_stack[i]);
		i++;
	}
	return (0);
}
