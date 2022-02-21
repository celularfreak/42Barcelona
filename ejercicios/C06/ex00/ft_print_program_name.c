/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 10:06:00 by dnunez-m          #+#    #+#             */
/*   Updated: 2021/11/18 16:12:46 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str++, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		ft_putstr(argv[0]);
	}
	write(1, "\n", 1);
}
