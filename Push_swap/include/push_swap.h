/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:20:58 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/10/04 12:48:06 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft.h"

typedef struct s_vars
{
	int				*stack_a;
	int				*stack_b;
	int				*temp_stack;
	int				stack_a_size;
	int				stack_b_size;
	int				stack_t_size;
	int				min;
	int				max;
}t_vars;

int		argv_check(int argc, char **argv);
void	init_stacks(t_vars *master, int argc, char **argv);
void	sort_stack(t_vars *master);
void	check_order(t_vars *master);
void	select_algorithm(t_vars *master);
void	swap(int *value1, int *value2);
void	sa(t_vars *master);
void	sb(t_vars *master);
void	ss(t_vars *master);
void	ra(t_vars *master);
void	rb(t_vars *master);
void	rr(t_vars *master);
void	rra(t_vars *master);
void	rrb(t_vars *master);
void	rrr(t_vars *master);
void	pa(t_vars *master);
void	pb(t_vars *master);
void	sort_two(t_vars *master);
void	sort_three(t_vars *master);
void	sort_max_five(t_vars *master);

#endif