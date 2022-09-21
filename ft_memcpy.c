/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:40:10 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/18 21:54:00 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*aux_dest;
	unsigned char	*aux_src;
	size_t			i;

	i = 0;
	aux_dest = dest;
	aux_src = (unsigned char *)src;
	if (!src) //nuevo
	{
		*aux_dest = *aux_src;
		return (dest);
	}
	while (i < n)
	{
		aux_dest[i] = aux_src[i];
		i++;
	}
	return (dest);
}
