/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:28:21 by migmoren          #+#    #+#             */
/*   Updated: 2022/10/05 18:46:29 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;
	t_list	*aux;

	if (!lst || !lst->content)
		return (0);
	aux = lst;
	node = ft_lstnew(f(aux->content));
	list = node;
	aux = aux->next;
	while (aux)
	{
		node = ft_lstnew(f(aux->content));
		if (!node)
		{
			ft_lstclear(&list, del);
			return (0);
		}
		node->next = 0;
		ft_lstadd_back(&list, node);
		aux = aux->next;
	}
	return (list);
}
