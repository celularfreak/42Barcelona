/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 13:07:48 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/01/30 11:59:31 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	strt;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	strt = 0;
	while (s1[strt] && ft_strchr(set, s1[strt]))
		strt++;
	while (s1[end] && ft_strrchr(set, s1[end]))
		end--;
	dest = ft_substr(s1, strt, end - strt + 1);
	return (dest);
}
