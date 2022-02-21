/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:01:32 by dnunez-m          #+#    #+#             */
/*   Updated: 2021/11/07 21:22:11 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	RUSH01_H

# define RUSH01_H
# define N 4

typedef struct s_enter
{
	char	up[N];
	char	down[N];
	char	left[N];
	char	right[N];
}t_enter;

int	arg_is_valid(char *av, t_enter *params);
int	print_sudoku(char sudoku[N][N]);
#endif
