/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:22:07 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/01/24 16:08:51 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cont;

	cont = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (cont < n)
	{
		((unsigned char *)dst)[cont] = ((unsigned char *)src)[cont];
		cont++;
	}
	return (dst);
}
