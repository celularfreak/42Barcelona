/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:05:33 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/15 09:49:04 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include	<unistd.h>
# include	<stdarg.h>
# include	<stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_format(va_list args, const char format);
int		ft_putstr_printf(char *s);
int		ft_putchar_printf(int c);
int		ft_putcent_printf(void);
char	*ft_itoa(int n);
#endif
