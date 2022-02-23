/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:20:42 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/22 11:04:22 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*get_next_line(int fd)
{
char		*line;
static char	*accu;

if (fd < 0 || BUFFER_SIZE <= 0)
	return (0);
accu = funcion1(fd, accu);
if (!accu)
	return (NULL);
line = funcion2(line);
accu = funcion3(accu);
return (line);
}

char *funcion1(int fd, char *accu)
{
	char	*buf;
	int		i;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	i = 1;
	while(!ft_strchr(accu, '\n') && i != 0)
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i == -1)
		buf[i] = 
	}	
}