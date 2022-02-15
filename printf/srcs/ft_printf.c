/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:25:22 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/15 09:47:08 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../libftprintf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		size;
	va_list	args;

	i = -1;
	size = 0;
	va_start(args, format);
	while (format[++i])
	{
		if (format[i] == '%')
		size += ft_format(args, format[i + 1]);
		else
			size += ft_putchar_printf(format[i]);
	}
	va_end(args);
	return (size);
}

int	ft_format(va_list args, const char format)
{
	int	size;

	size = 0;
	if (format == 'c')
		size += ft_putchar_printf(va_arg(args, int));
	else if (format == 's')
		size += ft_putstr_printf(va_arg(args, char *));
	else if (format == 'p')
		size += ft_putptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		size += ft_putnbr_printf(va_arg(args, int));
	else if (format == 'u')
		size += ft_putnbr_unsig_printf(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		size += ft_puthex_printf(va_arg(args, unsigned int), format);
	else if (format == '%')
		size += ft_putcent_printf();
	return (size);

}
