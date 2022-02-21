/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:08:45 by dnunez-m          #+#    #+#             */
/*   Updated: 2021/11/15 10:44:15 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tmp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			tmp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					tmp = 1;
				i++;
			}
			if (tmp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
