/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:20:50 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/06/16 12:07:43 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE 
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
char	*ft_strchr2(char *s, int c);
size_t	ft_strlen2(char *s);
char	*ft_strjoin2(char *s1, char *s2);
char	*ft_read_accu(int fd, char *accu);
char	*ft_accu(char *accu);
char	*ft_get_line(char *accu);
#endif
