/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:05:41 by dnunez-m          #+#    #+#             */
/*   Updated: 2021/11/05 12:45:11 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	count;

	count = 0;
	while (count < (size / 2))
	{
		aux = tab[count];
		tab[count] = tab[size - count - 1];
		tab[size - count - 1] = aux;
		count++;
	}
}
