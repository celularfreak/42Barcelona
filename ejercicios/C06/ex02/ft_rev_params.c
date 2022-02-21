/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:02:34 by dnunez-m          #+#    #+#             */
/*   Updated: 2021/11/18 16:08:05 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int	main(int argc, char **argv)
{
	int	x;

	x = 1;
	while (x < argc)
	{
		ft_putstr(argv[argc - x]);
		ft_putstr("\n");
		x++;
	}
}
