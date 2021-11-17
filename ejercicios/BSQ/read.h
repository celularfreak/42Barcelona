/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aigarcia <aigarcia@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:58:05 by aigarcia          #+#    #+#             */
/*   Updated: 2021/11/17 15:34:02 by aigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef READ_H
# define READ_H

struct s_map_config {
	int		lines;
	int		cols;
	char	empty;
	char	obstacle;
	char	filled;
	char	**contents;
};

struct s_map_config readfile(char *map);

char	*read_line(int fd);

struct s_map_config read_config(char *str);

int	**make_array(struct s_map_config config);
#endif
