/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:12:14 by dnunez-m          #+#    #+#             */
/*   Updated: 2021/11/08 18:13:18 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	control;

	i = 0;
	control = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z'))
			control = 0;
		i++;
	}
	return (control);
}
