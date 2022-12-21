/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:21:47 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/02 13:19:57 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_word(const char *str, char c)
{
	int	i;
	int	cut;

	i = 0;
	cut = 0;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str != c && cut == 0)
		{
			cut = 1;
			i++;
		}
		else if (*str == c)
			cut = 0;
		str++;
	}
	return (i);
}

static char	*dupli(const char *str, int ini, int fin)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((fin - ini + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (ini < fin)
		word[i++] = str[ini++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		ind;
	char	**split;

	split = malloc((num_word(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	i = 0;
	j = 0;
	ind = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && ind < 0)
			ind = i;
		else if ((s[i] == c || i == ft_strlen(s)) && ind >= 0)
		{
			split[j++] = dupli(s, ind, i);
			ind = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
