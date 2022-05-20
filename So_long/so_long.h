/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:32:38 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/05/20 15:27:02 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#define SIZE_SPRITE 50
#include "./mlx/mlx.h"
#include "./libft/libft.h"
#include "./get_next_line/get_next_line.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/uio.h>

/* typedef struct	s_sprite
{
	int				x;
	int				y;
	char			dir;
}					t_sprite;

*/

typedef struct 	s_vars
{
	void			*img;
	void			*mlx;
	void			*win;
	void			**map;
}					t_vars;

int		arr_lenght(char **arr);
char	**line_add(char **arr, char *str);
char **map_opp(char *map);

#endif