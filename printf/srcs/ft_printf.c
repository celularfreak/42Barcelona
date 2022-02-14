/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:25:22 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/14 17:01:27 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libftprintf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	va_list	args;

	i = -1;
	ret = 0;
	va_start(args, format);
	while (format[++i])
	{
		if (format[i] == '%')
		i = ft_format(args, format[i + 1]);
		else
			ret += ft_putchar(&format[i]);
	}
	va_end(args);
	return (ret);
}

int	ft_format(va_list args, const char *format)
{
	if (format == 'c')
		ft_putchar(va_args(args, int));
	if (var == 's')
		ft_putstr(*format);
	
		

}
