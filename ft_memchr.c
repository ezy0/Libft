/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 21:40:19 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/18 21:54:55 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	aux = s;
	i = 0;
	while (i < n)
	{
		if (*aux == c)
		{
			s = aux;
			return (s);
		}
		aux++;
		i++;
	}
	return (0);
}
