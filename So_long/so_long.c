/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:32:44 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/05/18 18:41:38 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "so_long.h"

int	main(int argc, char **argv)
{	
	int fd;
	int i;
	char **map;
	char *line;


		if (argc == 1)
		return (0);
	i = 0;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		exit_error("Error: Map not found\n");
	map = ft_calloc(sizeof(char *), 1);
	if (!map)
		exit_error("Error: Malloc failed\n");
	while (1){
		line = get_next_line(fd);
		if (line != NULL)
			map = arr_push(map, line);
		else
			break;
		i++;
	}
	close(fd);
}