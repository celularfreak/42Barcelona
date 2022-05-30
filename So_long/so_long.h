/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:32:38 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/05/30 17:07:16 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#define SIZE 50
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
	void			*ground;
	void			*sonic;
	void			*rocks;
	void			*ring;
	void			*door;
	void			*mlx;
	void			*win;
	char			**map;
	int				size_w;
	int				size_h;
}					t_vars;

int		arr_lenght(char **arr);
char	**line_add(char **arr, char *str);
char	**map_opp(char *orig_map);
t_vars	*ini_img(t_vars *master);
#endif