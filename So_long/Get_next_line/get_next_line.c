/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:20:42 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/05/16 12:20:32 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	if (!accu)
		return (NULL);
	while (accu[i] && accu[i] != '\n')
		i++;
	if (!accu[i])
	{
		free(accu);
		return (NULL);
	}
	str2 = (char *)malloc(sizeof(char) * (ft_strlen2(accu) - i + 1));
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
	while (!ft_strchr2(accu, '\n') && i != 0)
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[i] = '\0';
		accu = ft_strjoin2(accu, buf);
	}
	free(buf);
	return (accu);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*accu;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > OPEN_MAX)
		return (0);
	accu = ft_read_accu(fd, accu);
	if (!accu)
		return (NULL);
	line = ft_get_line(accu);
	accu = ft_accu(accu);
	return (line);
}
