/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:43:17 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/18 21:54:09 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*aux_dest;
	unsigned char	*aux_src;
	unsigned char	*aux;
	size_t			i;

	i = -1;
	aux_dest = dest;
	aux_src = (unsigned char *)src;
	aux = (unsigned char *)src;
	while (aux_src[++i] != '\0')
		aux++;
	i = -1;
	while (++i < n)
		aux[i] = aux_src[i];
	i = -1;
	while (++i < n)
	{
		aux_dest[i] = aux[i];
		aux[i] = '\0';
	}
	return (dest);
}
