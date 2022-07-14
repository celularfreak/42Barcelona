/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:32:38 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/07/14 18:01:23 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define SIZE 50
# include "./mlx/mlx.h"
# include "./libft/libft.h"
# include "./Printf/ft_printf.h"
# include "./get_next_line/get_next_line.h"
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/uio.h>
# include <string.h>

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
	int				total_ring;
	int				player_pos_x;
	int				player_pos_y;
	int				num_mov;

}t_vars;

int		arr_lenght(char **arr);
char	**line_add(char **arr, char *str);
char	**map_opp(char *orig_map);
t_vars	*ini_img(t_vars *master);
void	ins_img(t_vars *master, int x, int y);
void	put_image(t_vars *master, void *img, int x, int y);
int		rectangle_test(char **map);
int		close_test(char **map);
int		item_test(char **map, char item);
void	map_tester(char **map);
int		key_press(int keycode, t_vars *master);
void	player_pos(char **map, t_vars *master);
void	key_up(t_vars *master);
void	key_left(t_vars *master);
void	key_down(t_vars *master);
void	key_right(t_vars *master);
void	num_mov(t_vars *master);
int		can_move(t_vars *master, int x, int y);
void	error_msg(char *err);
int		free_exit(t_vars *master);
#endif