/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:58:05 by aigarcia          #+#    #+#             */
/*   Updated: 2022/06/16 12:16:18 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"
#include "header.h"

struct s_map_config	readfile(char *map)
{
	int					fd;
	char				*line;
	int					i;
	struct s_map_config	map_config;

	fd = open(map, O_RDONLY);
	if (fd < 0)
		return (null);
	line = read_line(fd);
	map_config = read_config(line);
	free(line);
	i = 0;
	map_config.contents = (char **)malloc(map_config.lines * sizeof(char *));
	if (map_config.contents == NULL)
		return (NULL);
	while (i < map_config.lines)
	{
		map_config.contents[i] = read_line(fd);
		if (i == 0)
			map_config.cols = ft_strlen(map_config.contents[i]);
		i++;
	}
	close(fd);
	return (map_config);
}

char	*read_line(int fd)
{
	char	c[1];
	char	*line;

	line = (char *)malloc(sizeof(int));
	if (line == NULL)
		return (NULL);
	while (read(fd, c, 1) > 0 && c[0] != '\n')
		ft_strncat(line, c, 1);
	if (read(fd, c, 1) == NULL)
		return (NULL);
	return (line);
}

int	**make_array(struct s_map_config config)
{
	int	jt;
	int	it;
	int	**arr;

	arr = (int **)malloc(config.lines * config.cols * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	jt = 0;
	while (jt < config.lines)
	{
		arr[jt] = (int *)malloc(config.cols * sizeof(int));
		if (arr[jt] == NULL)
			return (NULL);
		it = 0;
		while (it < config.cols)
		{
			if (config.contents[jt][it] == config.empty)
				arr[jt][it] = 1;
			else if (config.contents[jt][it] == config.obstacle)
				arr[jt][it] = 0;
			it++;
		}
		free(config.contents[jt]);
		jt++;
	}
	return (arr);
}

struct s_map_config	read_config(char *str)
{
	struct s_map_config	map_config;
	int					i;

	i = 0;
	map_config.lines = ft_atoi(str);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		i++;
	map_config.empty = str[i];
	map_config.obstacle = str[i = 1];
	map_config.filled = str[i + 2];
	return (map_config);
}
