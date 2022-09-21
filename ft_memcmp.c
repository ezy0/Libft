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
	unsigned char	*aux1;
	unsigned char	*aux2;

	aux1 = s1;
	aux2 = s2;
	if (s1 == s2)
		return (0);
	while ((*aux1 != '\0' || *aux2 != '\0') && n > 0)
	{
		if (*aux1 > *aux2 || *aux2 == '\0')
			return (1);
		else if (*aux1 < *aux2 || *aux1 == '\0')
			return (-1);
		aux1++;
		aux2++;
		n--;
	}
	return (0);
}
