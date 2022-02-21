/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:48:50 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/01/28 09:02:12 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = malloc(sizeof(char) * ((ft_strlen(s)) + 1));
	if (dest == NULL)
		return (NULL);
	while (i != (ft_strlen(s)) + 1)
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}
