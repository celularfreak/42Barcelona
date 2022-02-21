/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:32:11 by dnunez-m          #+#    #+#             */
/*   Updated: 2021/11/08 17:46:38 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	control;

	i = 0;
	control = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
			control = 0;
		i++;
	}
	return (control);
}
