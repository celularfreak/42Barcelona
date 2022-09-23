/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:09:59 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/23 12:59:35 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	index_stack(t_vars *master, int argc)
// {
// 	int	i;
// 	int	j;
// 	int	index;
// 	int	temp;

// 	i = 0;
// 	index = 0;
// 	temp = argc - 1;
// 	printf("temp is %d\n",temp);
// 	while (i < temp)
// 	{
// 		j = 0;
// 		argc = temp;
// 		while (argc > 1)
// 		{
// 			if ((master->temp_stack[i] > master->temp_stack[j]))
// 				index++;
// 			j++;
// 			argc--;
// 		}
// 		master->stack_a[i] = index;
// 		index = 0;
// 		i++;
// 	}
void	index_stack(t_vars *master, int argc)
{
	int	cont_g;
	int	cont_p;
	int	nbr;

	cont_g = 0;
	cont_p = 0;
	nbr = 0;
	while (cont_g < argc -1)
	{
		cont_p = 0;
		nbr = 0;
		while (cont_p < argc -1)
		{
			if ((master->temp_stack[cont_p] < master->temp_stack[cont_g]))
				nbr++;
			cont_p++;
		}
		master->stack_a[cont_g] = nbr;
		cont_g++;
	}
}

/*void	order_temp_stack(t_vars *master, int argc)
{
	int	j;
	int	temp;

	j = 0;
	while (++j < (argc - 1))
	{
		if (master->temp_stack[j] < master->temp_stack[j - 1])
		{
			temp = master->temp_stack[j];
			master->temp_stack[j] = master->temp_stack[j - 1];
			master->temp_stack[j - 1] = temp;
			j = 0;
		}
	}
}

void index_stack(t_vars *master, int argc)
{
	int	x;
	int y;

	x = 0;
	while (x < argc)
	{
		y = 0;
		if (master->temp_stack[x] == master->temp_stack_b[y])
		{
			master->stack_a[y] = y;
			x++;
			y = 0;
		}
		x++;
	}
}*/
