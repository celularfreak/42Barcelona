/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:01:26 by dnunez-m          #+#    #+#             */
/*   Updated: 2021/11/09 10:41:45 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			if ((str[i - 1] < 'a' || str[i - 1] > 'z')
				&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
				&& (str[i - 1] < '0' || str[i - 1] > '9'))
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
	{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] > 64 && str[i] < 91 ))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
