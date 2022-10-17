/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:12:04 by migmoren          #+#    #+#             */
/*   Updated: 2022/10/17 17:30:41 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*cpy;
	size_t			i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if (len <= (size_t)ft_strlen(s))
		cpy = (char *)malloc(sizeof(char) * (len + 1));
	else
		cpy = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!cpy)
		return (0);
	while (s[j] != '\0' && i < len)
	{
		if (j >= start)
			cpy[i++] = s[j];
		j++;
	}
	cpy[i] = '\0';
	return (cpy);
}
