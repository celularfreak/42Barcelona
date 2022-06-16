/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:58:05 by aigarcia          #+#    #+#             */
/*   Updated: 2022/06/16 12:13:44 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "read.h"

int	main(int argc, char **argv)
{
	struct s_map_config	map_config;
	int					**arr;
	int					i;
	int					j;
	int					it;
	struct s_result		result;

	i = 0;
	j = 0;
	it = 1;
	if (argc < 1)
		return (0);
	while (argv[it])
	{
		map_config = readfile(argv[it]);
		it++;
	}
	arr = make_array(map_config);
	while (i < map_config.lines)
	{
		printf("%d", arr[i][j]);
		i++;
		if (i == map_config.lines)
		{
			printf("\n");
			j++;
			i = 0;
			if (j == map_config.cols)
				break ;
		}
	}
}
