/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:18:39 by dnunez-m          #+#    #+#             */
/*   Updated: 2021/11/10 13:06:49 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	control;

	i = 0;
	control = 1;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			control = 0;
		i++;
	}
	return (control);
}
