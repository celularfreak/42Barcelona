/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_conv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:24:37 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/07/22 12:10:28 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include "../libft/libft.h"
#include "../Printf/ft_printf.h"
#include "../get_next_line/get_next_line.h"

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
		error_msg("Not a map in the file");
	map = ft_calloc(sizeof(char *), 1);
	if (!map)
		error_msg("Malloc failed");
	while (1)
	{
		line = get_next_line(fd);
		if (line != NULL)
			map = line_add(map, line);
		else if (line == NULL && i == 0)
			error_msg("Map is empty");
		else
			break ;
		i++;
	}
	close(fd);
	return (map);
}

void	error_msg(char *err)
{
	ft_printf("Error: %s\n", err);
	exit(0);
}
