/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:21:47 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/13 09:24:31 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char *s, char c)
{
	size_t	num;

	num = 0;
	if (*s && *s != c)
	{
		num++;
		s++;
	}
	while (*s)
	{
		if (*s != c && *(s - 1) == c)
			num++;
		s++;
	}	
	return (num);
}

static char	*getword(char *s, char c, size_t item)
{
	size_t	start;
	size_t	end;
	size_t	k;
	size_t	i;

	start = 0;
	end = 0;
	k = -1;
	i = 0;
	while (++k <= item)
	{
		while (s[i] == c)
			start = ++i;
		while (s[i] && s[i] != c)
			end = i++;
	}
	return (ft_substr(s, start, end - start + 1));
}

char	**ft_split(char const *s, char c)
{
	long long	num;
	char		**str;
	long long	i;

	num = 0;
	if (!s)
		return (NULL);
	num = countwords((char *)s, c);
	str = (char **)ft_calloc(sizeof(char *), (size_t)(num + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < num)
	{
		str[i] = getword((char *)s, c, (size_t)i);
		if (!str[i])
		{
			while (--i >= 0)
				free (str[i]);
			free (str);
			return (NULL);
		}	
	}
	str[i] = NULL;
	return (str);
}
