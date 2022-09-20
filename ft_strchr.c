/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:20:20 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/20 18:53:02 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(const char *s);

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	j;

	i = ft_strlen(s);
	j = -1;
	while (++j <= i)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}
