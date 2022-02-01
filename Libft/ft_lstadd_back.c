/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 00:57:28 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/01 15:00:25 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*i;

	if (!new)
		return (NULL);
	if (!lst)
	{
		*lst = new;
		return (NULL);
	}
	i = ft_lstlast(*lst);
	i->next = new;

}
