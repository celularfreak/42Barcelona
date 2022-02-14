/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:05:33 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/14 17:00:06 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include	<unistd.h>
# include	<stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_format(const char *format, int var);
int	ft_putstr(char *s);
size_t	ft_strlen(const char *s);
int	ft_putchar(char c);
#endif
