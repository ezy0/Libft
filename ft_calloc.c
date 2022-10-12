/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:16:00 by migmoren          #+#    #+#             */
/*   Updated: 2022/10/12 19:48:49 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*aux;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (0);
	aux = (void *)malloc(count * size);
	if (!aux)
		return (0);
	ft_bzero(aux, size * count);
	return (aux);
}
