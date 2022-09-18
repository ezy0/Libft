/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:50:54 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/18 21:54:27 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*aux;

	i = 0;
	aux = b;
	while (i < len)
	{
		*aux = (unsigned char)c;
		aux++;
		i++;
	}
	return (b);
}
