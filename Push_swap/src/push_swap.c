/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:21:57 by dnunez-m          #+#    #+#             */
/*   Updated: 2023/01/31 15:52:29 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

static int ft_count_words(const char *str, char c)

{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	t_vars	master;
	
	if (argc == 1)
		exit (0);
	if (argc == 2)
	{
		argc = ft_count_words(argv[1], ' ');
		argv = ft_split(argv[1], ' ') - 1;
	}
	/*while (argc > 0)
	{
		write(1, argv[argc], 1);
		write(1, " ", 1);
		argc--;
	}
	if (argv_check(argc, argv) == 1)
		exit (0);*/
	init_stacks(&master, argc, argv);
	sort_stack(&master);
	check_order(&master);
	select_algorithm(&master);
	exit(0);
}