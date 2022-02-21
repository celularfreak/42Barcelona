/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aigarcia <aigarcia@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:32:45 by aigarcia          #+#    #+#             */
/*   Updated: 2021/11/11 17:36:29 by aigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	it;
	unsigned int	jt;

	it = 0;
	jt = 0;
	while (dest[it] != '\0')
	{
		it++;
	}
	while (src[jt] != '\0' && jt < nb)
	{
		dest[it + jt] = src[jt];
		jt++;
	}
	dest[it + jt] = '\0';
	return (dest);
}
