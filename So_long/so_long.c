/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:32:44 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/05/16 13:16:27 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "so_long.h"


typedef struct s_data{
	void 	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
} t_data;

int	main(int argc, char **argv)
{
	void	*mlx;
	void	*img;
	void	*img2;
	void	*img3;
	void	*img4;
	void	*img5;
	void	*mlx_win;
	char	*relative_path = "./img/sonic.xpm";
	char	*relative_path2 = "./img/sonic2.xpm";
	char	*relative_path3 = "./img/sonic3.xpm";
	char	*relative_path4 = "./img/sonic4.xpm";
	char	*relative_path5 = "./img/sonic5.xpm";
	int		img_width;
	int		img_height;

	img_width = 42;
	img_height = 42;
	
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
	img2 = mlx_xpm_file_to_image(mlx, relative_path2, &img_width, &img_height);
	img3 = mlx_xpm_file_to_image(mlx, relative_path3, &img_width, &img_height);
	img4 = mlx_xpm_file_to_image(mlx, relative_path4, &img_width, &img_height);
	img5 = mlx_xpm_file_to_image(mlx, relative_path5, &img_width, &img_height);
	//mlx_put_image_to_window ( void *mlx_ptr, void *win_ptr, void *img_ptr, int x, int y );
	mlx_put_image_to_window(mlx, mlx_win, img, 800, 600);
	mlx_put_image_to_window(mlx, mlx_win, img2, 800, 650);
	mlx_put_image_to_window(mlx, mlx_win, img3, 800, 700);
	mlx_put_image_to_window(mlx, mlx_win, img4, 800, 750);
	mlx_put_image_to_window(mlx, mlx_win, img5, 800, 800);
	mlx_loop(mlx);
}