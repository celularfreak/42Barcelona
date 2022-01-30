/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:08:33 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/01/30 16:28:34 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s);
	if (((char)c) == '\0')
		return ((char *)(&s[len]));
	while (--len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)(&s[len]));
	}
	return (NULL);
}
