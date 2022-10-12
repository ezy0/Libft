/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:19:53 by migmoren          #+#    #+#             */
/*   Updated: 2022/10/12 13:06:32 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	l_dst;

	i = 0;
	if (!dst || dst[0] == '\0')
		l_dst = 0;
	else
		l_dst = (size_t)ft_strlen(dst);
	j = l_dst;
	if (size <= l_dst || size <= 0)
		return (size + ft_strlen(src));
	while (src[i] && l_dst + i < size - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (l_dst + ft_strlen(src));
}
