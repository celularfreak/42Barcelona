/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:20:58 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/26 00:15:54 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_vars
{
	int				*stack_a;
	int				*stack_b;
	int				*temp_stack;
}t_vars;

int		argv_check(int argc, char **argv);
void	init_stacks(t_vars *master, int argc, char **argv);
void	index_stack(t_vars *master, int argc);

#endif