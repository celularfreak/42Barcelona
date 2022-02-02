/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:40:57 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/02/01 16:53:44 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*beginning;

	if (!lst || !f)
		return (NULL);
	beginning = ft_lstnew(f(lst->content));
	if (!beginning)
		return (NULL);
	new = beginning;
	while (lst->next)
	{
		lst = lst->next;
		new->next = ft_lstnew(f(lst->content));
		if (!new->next)
		{
			ft_lstclear(&beginning, del);
			return (NULL);
		}
		new = new->next;
	}
	new->next = NULL;
	return (beginning);
}