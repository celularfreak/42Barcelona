/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_conv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:24:37 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/05/27 12:40:29 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	arr_lenght(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
		i++;
	return (i);
}

char	**line_add(char **arr, char *str)
{
	int		i;
	int		n;
	char	**temp;

	i = 0;
	n = arr_lenght(arr);
	temp = ft_calloc(sizeof(char *), n + 2);
	while (i < n)
	{
		temp[i] = arr[i];
		i++;
	}
	temp[i] = str;
	free(arr);
	return (temp);
}

char	**map_opp(char *orig_map)
{
	int		fd;
	int		i;
	char	**map;
	char	*line;

	i = 0;
	fd = open(orig_map, O_RDONLY);
	if (fd == -1)
		printf("Error: Not a map in the file\n");
	map = ft_calloc(sizeof(char *), 1);
	if (!map)
		printf("Error: Malloc failed\n");
	while (1)
	{
		line = get_next_line(fd);
		if (line != NULL)
			map = line_add(map, line);
		else
			break ;
		i++;
	}
	close(fd);
	return (map);
}
