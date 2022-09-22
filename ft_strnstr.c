/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:54:01 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/22 16:08:04 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	p;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		p = i;
		if (haystack[i] == needle[j])
		{
			while (needle[j] != '\0' && haystack[i + j] == needle[j]
				&& j + i < len)
				j++;
		}
		i++;
		if (needle[j] == '\0')
			return ((char *)haystack + p);
	}
	return (0);
}
