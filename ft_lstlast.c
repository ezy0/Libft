/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:07:55 by migmoren          #+#    #+#             */
/*   Updated: 2022/10/04 18:36:54 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst)
{
	int		i;

	i = ft_lstsize(lst) - 1;
	while (i > 0)
	{
		i--;
		lst = lst->next;
	}
	return (lst);
}
