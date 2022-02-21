/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:52:16 by dnunez-m          #+#    #+#             */
/*   Updated: 2021/11/07 21:12:35 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"

int	print_sudoku(char sudoku[N][N])
{
	int	i;
	int	j;

	i = -1;
	while (++i < N)
	{
		j = -1;
		while (++j < N)
		{
			write(1, &sudoku[i][j], 1);
			if (j != (N - 1))
				write (1, " ", 1);
		}
		write(1, "\n", 1);
	}
	return (1);
}

int	arg_is_valid(char *av, t_enter *params)
{
	int		i;
	char	*cnt_params;

	i = -1;
	cnt_params = &params -> up[0];
	while (av[++i] != '\0')
	{
		if (i % 2 != 0 && av[i] == ' ')
			continue ;
		if (i % 2 != 0 && av[i] != ' ')
			return (0);
		if (i % 2 == 0 && !(av[i] >= '1' && av[i] <= (N + '0')))
			return (0);
		*cnt_params = av[i] - '0';
		cnt_params++;
	}
	if (N == 4 && i != 31)
		return (0);
	return (i);
}

int	main(int ac, char **av)
{
	t_enter	input;

	if (ac != 2 || !arg_is_valid(av[1], &input))
	{
		write(1, "Error, sigue nadando!\n", 21);
		return (0);
	}
	else
		write(1, "42 es la respuesta.\n", 20);
	return (1);
}
