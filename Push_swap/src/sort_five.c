/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:45:09 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/10/03 09:56:36 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_vars *master)
{
	int i;

	i = 0;
	pb(master);
	pb(master);
	sort_three(master);
	pa(master);
	pa(master);
	
}
