/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:24:53 by dnunez-m          #+#    #+#             */
/*   Updated: 2023/01/31 17:09:41 by dnunez-m         ###   ########.fr       */
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
	int	temp;

	i = 1;
	temp = argc;
	while (i < temp - 1)
	{
		j = 1;
		argc = temp;
		while (argc > 1)
		{
			if (ft_strcmp(argv[i], argv[j]) == 0 && i != j)
			{
				write(2, "Error\n", 6);
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
	char	*temp2;
	
	i = 1;
	while (argc > 1)
	{
		temp = ft_atoi(argv[i]);
		temp2 = ft_itoa(temp);
		if (ft_strcmp(argv[i], temp2) != 0)
		{
			write(2, "Error\n", 6);
			free(temp2);
			return (1);
		}
		argc--;
		i++;
	}
	free(temp2);
	return (0);
}

int	argv_check(int argc, char **argv)
{
	if (check_valid_arg(argc, argv) == 1)
		return (1);
	if (check_doubles(argc, argv) == 1)
		return (1);
	return (0);
}
