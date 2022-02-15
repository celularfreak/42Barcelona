/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:22:53 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/15 09:47:04 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../libftprintf.h"

void	case_null(char *str)
{
	int	b;

	b = 0;
	while (str[b])
	{
		write(1, &str[b], 1);
		b++;
	}
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		case_null("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
