/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:20:42 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/25 13:30:29 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_get_line(char *accu)
{
	int		i;
	char	*str;

	i = 0;
	if (!accu[i])
		return (NULL);
	while (accu[i] && accu[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (accu[i] && accu[i] != '\n')
	{
		str[i] = accu[i];
		i++;
	}
	if (accu[i] == '\n')
	{
		str[i] = accu[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_accu(char *accu)
{
	int		i;
	int		j;
	char	*str2;

	i = 0;
	while (accu[i] && accu[i] != '\n')
		i++;
	if (!accu[i])
	{
		free(accu);
		return (NULL);
	}
	str2 = (char *)malloc(sizeof(char) * (ft_strlen(accu) - i + 1));
	if (!str2)
		return (NULL);
	i++;
	j = 0;
	while (accu[i])
		str2[j++] = accu[i++];
	str2[j] = '\0';
	free(accu);
	return (str2);
}

char	*ft_read_accu(int fd, char *accu)
{
	char	*buf;
	int		i;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
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
	static char	*accu[OPEN_MAX];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= OPEN_MAX)
		return (0);
	accu[fd] = ft_read_accu(fd, accu[fd]);
	if (!accu[fd])
		return (NULL);
	line = ft_get_line(accu[fd]);
	accu[fd] = ft_accu(accu[fd]);
	return (line);
}
