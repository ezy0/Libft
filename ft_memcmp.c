/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:42:05 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/21 18:06:58 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	unsigned char	*aux1;
	unsigned char	*aux2;
	
	i = 0;	
	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	if (s1 == s2)
		return (0);
	while ((aux1[i] != '\0' || aux2[i] != '\0') && i < n)
	{
		if (aux1[i] > aux2[i] || aux2[i] == '\0')
			return (1);
		else if (aux1[i] < aux2[i] || aux1[i] == '\0')
			return (-1);
		i++;
	}
	return (0);
}
