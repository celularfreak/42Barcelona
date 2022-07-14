/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:36:02 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/07/14 18:04:23 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_printf.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*x;

	x = malloc(count * size);
	if (!x)
		return (NULL);
	ft_bzero(x, (count * size));
	return (x);
}
