/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avila-ca <avila-ca@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:25:42 by avila-ca          #+#    #+#             */
/*   Updated: 2021/11/14 22:30:53 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

char	**readfile(char *params);
char	*ft_atoc(const char *str);
char	*ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	print_number(char *num, char **diccionario);
void	print_hundred(char *str, char **diccionario);
void	print_tens(char *str, char **diccionario);
void	print_units(char *str, char **diccionario);
char	*ft_strcmp(char *s1, char *s2);
void	ft_putstring(char *str);
void	*ft_putnbr(int nb, char *nc);
void	ft_putchar(char c);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
void	ft_enlace(int size, char **diccionario);

#endif
