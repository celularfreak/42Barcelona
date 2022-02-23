/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:20:42 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/23 16:41:01 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*funcion1(int fd, char *accu)
{
	char	*buf;
	int		i;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	i = 1;
	while (!ft_strchr(accu, '\n') && i != 0)
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[i] = '\0';
		accu = ft_strjoin(accu, buf);
	}
	free(buf);
	return (accu);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*accu;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	accu = funcion1(fd, accu);
	if (!accu)
		return (NULL);
	line = funcion2(accu);
	accu = funcion3(accu);
	return (line);
}
