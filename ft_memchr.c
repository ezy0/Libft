/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 21:40:19 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/19 16:52:20 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	aux = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*aux == c)
		{
			s = aux;
			return ((void *)s);
		}
		aux++;
		i++;
	}
	return (0);
}

int main()
{
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	
	printf("%s", (char *)ft_memchr(tab, -1, 7));
}