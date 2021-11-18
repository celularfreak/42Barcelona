/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:27:32 by dnunez-m          #+#    #+#             */
/*   Updated: 2021/11/18 16:05:12 by dnunez-m         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 == *s1)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int		x;
	char	*tmp;

	x = 1;
	while (x < argc - 1)
	{
		if (ft_strcmp(argv[x], argv[x + 1]) > 0)
		{
			tmp = argv[x + 1];
			argv[x + 1] = argv[x];
			argv[x] = tmp;
			x = 0;
		}
		x++;
	}
	x = 1;
	while (x < argc)
	{
		ft_putstr(argv[x]);
		ft_putstr("\n");
		x++;
	}
}
