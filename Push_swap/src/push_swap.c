/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:21:57 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/28 14:59:12 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	t_vars	master;
	int		i;

	i = 0;
	if (argc == 1)
		return (0);
	if (argv_check(argc, argv) == 1)
		return (0);
	init_stacks(&master, argc, argv);
	sort_stack(&master);
	if (argc == 4)
		sort_three(&master);
	/*else if (argc == 5)
		sort_four(&master);
	else if (argc == 6)
		sort_five(&master);
	else
		sort_big(&master);*/
	while (i < (master.stack_size))
	{
		printf("%d\n", master.stack_a[i]);
		i++;
	}
	return (0);
}
