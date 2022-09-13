/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:40:57 by dnunez-m          #+#    #+#             */
/*   Updated: 2022/09/13 09:20:08 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*ini;
	void	*content;

	if (!lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		ini = ft_lstnew(content);
		if (!ini)
		{
			if (content)
				free(content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, ini);
		lst = lst->next;
	}
	return (new);
}
