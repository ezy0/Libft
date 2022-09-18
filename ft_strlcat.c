/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:19:53 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/18 21:54:51 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	l_dst;

	i = 0;
	l_dst = ft_strlen(dst);
	if (size <= l_dst)
		return (size + ft_strlen(src));
	while (src[i] != '\0' && l_dst + 1 < size)
		dst[l_dst++] = src[i++];
	dst[l_dst] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
