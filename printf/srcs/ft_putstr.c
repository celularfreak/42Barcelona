/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:22:53 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/14 15:26:36 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libftprintf.h"

int	ft_putstr(char *s)
{
	if (!s)
		return ;
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}
