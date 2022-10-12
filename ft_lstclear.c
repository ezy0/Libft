/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:39:35 by migmoren          #+#    #+#             */
/*   Updated: 2022/10/12 18:43:15 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*aux2;

	if (!lst || !del)
		return ;
	aux = *lst;
	while (aux)
	{
		aux2 = aux->next;
		ft_lstdelone(aux, del);
		aux = aux2;
	}
	*lst = 0;
}
