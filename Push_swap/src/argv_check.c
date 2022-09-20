/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:24:53 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/20 17:27:33 by dnunez-m         ###   ########.fr       */
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

int	argv_check(int argc, char **argv)
{
	int		i;
	int		temp;

	i = 1;
	while (argc > 1)
	{
		temp = ft_atoi(argv[i]);
		if (ft_strcmp(argv[i], ft_itoa(temp)) != 0)
			return (1);
		argc--;
		i++;
	}
	return (0);
}
