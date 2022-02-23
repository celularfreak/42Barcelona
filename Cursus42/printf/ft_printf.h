/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:05:33 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/23 16:39:42 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<unistd.h>
# include	<stdarg.h>
# include	<stdlib.h>
# include	<stdint.h>

int					ft_printf(const char *format, ...);
int					ft_format(va_list args, const char format);
int					ft_putstr_printf(char *s);
int					ft_putchar_printf(int c);
int					ft_putcent_printf(void);
int					ft_putnbr_printf(int n);
unsigned int		ft_putnbr_unsig_printf(unsigned int n);
char				*ft_itoa(int n);
char				*ft_itoa_unsigned(unsigned int n);
void				*ft_calloc(size_t count, size_t size);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *s, int c, size_t n);
int					ft_putptr_printf(unsigned long long ptr);
void				ft_putchar(char c);
int					ft_puthex_printf(unsigned int num, const char format);
#endif
