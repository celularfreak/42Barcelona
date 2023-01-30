/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:21:57 by dnunez-m          #+#    #+#             */
/*   Updated: 2023/01/30 14:30:22 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	t_vars	master;
	
	if (argc == 1)
		return (0);
	if (argv_check(argc, argv) == 1)
		return (0);
	init_stacks(&master, argc, argv);
	sort_stack(&master);
	check_order(&master);
	/*write(1, "Los indices antes de ordenar ", 29);
	while (i < master.stack_a_size)
	{
		ft_putnbr_fd(master.stack_a[i], 1);
		ft_putchar_fd(' ', 1);
		i++;
	}
	ft_putchar_fd('\n', 1);*/
	select_algorithm(&master);
	int i;
	i = 0;
	write(1, "Los indices despues de ordenar ", 31);
	while (i < master.stack_a_size)
	{
		ft_putnbr_fd(master.stack_a[i], 1);
		ft_putchar_fd(' ', 1);
		i++;
	}
	exit(0);
	return (0);
}
