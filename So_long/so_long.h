/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:32:38 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/06/20 13:06:16 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#define		SIZE 50
#include 	"./mlx/mlx.h"
#include 	"./libft/libft.h"
#include 	"./get_next_line/get_next_line.h"
#include 	<stdlib.h>
#include 	<stdio.h>
#include 	<math.h>
#include 	<fcntl.h>
#include 	<unistd.h>
#include 	<sys/uio.h>

typedef struct s_character
{
	int				x;
	int				y;
}					t_character;

typedef struct s_vars
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
	int				item_count;
	t_character		character;
}					t_vars;

int		arr_lenght(char **arr);
char	**line_add(char **arr, char *str);
char	**map_opp(char *orig_map);
t_vars	*ini_img(t_vars *master);
void	ins_img(t_vars *master, int x, int y);
int		key_press(int key, t_character *character, t_vars *master);
void	put_image(t_vars *master, void *img, int x, int y);
int		rectangle_test(char **map);
int		close_test(char **map);
int		item_count(char **map, char item);
//int		events(int keycode, t_vars *master);

#endif