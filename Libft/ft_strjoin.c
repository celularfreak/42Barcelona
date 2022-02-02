/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:02:32 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/02 12:06:12 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		j;
	int		i;

	i = -1;
	j = -1;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dest = malloc(sizeof(char) * ((ft_strlen(s1)+(ft_strlen(s2))) + 1));
	if (!dest)
		return (NULL);
	while (s1 != NULL && s1[++j] != '\0')
		dest[++i] = s1[j];
	j = -1;
	while (s2 != NULL && s2[++j] != '\0')
		dest[++i] = s2[j];
	dest[++i] = '\0';
	return (dest);
}
