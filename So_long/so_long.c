/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:32:44 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/05/27 12:40:25 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "so_long.h"

int	main(int argc, char **argv)
{	
	t_vars vars;


	if (argc == 1)
	return (0);
	
	vars.map = map_opp(argv[1]);
	
	return (0);

}