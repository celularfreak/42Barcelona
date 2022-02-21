/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avila-ca <avila-ca@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 12:33:44 by avila-ca          #+#    #+#             */
/*   Updated: 2021/11/14 22:13:51 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_reader(char **diccionario, char *lector, int num_line)
{
	int		num_word;
	char	*frase;
	int		num_char;

	num_line = 0;
	num_char = 0;
	num_word = 0;
	while (lector[num_char] != '\0')
	{
		if (lector[num_char] == '\n')
		{
			frase = (char *)malloc(sizeof(char) * num_word);
			ft_strncpy(frase, &lector[num_char - num_word + 1], (num_word - 1));
			diccionario[num_line] = frase;
			num_line++;
			num_word = 0;
		}
		num_char++;
		num_word++;
	}
	return (diccionario);
}

int	ft_read_error(void)
{
	write(2, "error", 5);
	return (0);
}

char	**readfile(char *params)
{
	char	lector[4096];
	int		num_line;
	int		num_char;
	int		fd;
	char	**diccionario;

	fd = open (params, O_RDONLY);
	num_line = 0;
	num_char = 0;
	if (read (fd, lector, 4096) < 0)
		ft_read_error();
	else
	{
		while (lector[num_char] != '\0')
		{
			if (lector[num_char] == '\n')
				num_line++;
				num_char++;
		}
	}
	diccionario = (char **) malloc (sizeof(char *) * num_line);
	ft_reader(diccionario, lector, num_line);
	close(fd);
	return (diccionario);
}
