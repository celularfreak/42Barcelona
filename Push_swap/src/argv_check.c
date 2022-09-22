/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:24:53 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/22 18:57:57 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

static int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 == *s1)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

static int	check_doubles(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argc > 1)
	{
		j = 1;
		while (argc > 1)
		{
			if (ft_strcmp(argv[i], argv[j]) == 0 && i != j)
			{
				write(1, "Error", 5);
				return (1);
			}
			argc--;
			j++;
		}
		argc--;
		i++;
	}
	return (0);
}

static int	check_valid_arg(int argc, char **argv)
{
	int		i;
	int		temp;

	i = 1;
	while (argc > 1)
	{
		temp = ft_atoi(argv[i]);
		if (ft_strcmp(argv[i], ft_itoa(temp)) != 0)
		{
			write(1, "Error", 5);
			return (1);
		}
		argc--;
		i++;
	}
	return (0);
}

int	argv_check(int argc, char **argv)
{
	if (check_doubles(argc, argv) == 1)
		return (1);
	if (check_valid_arg(argc, argv) == 1)
		return (1);
	return (0);
}
