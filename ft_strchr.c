/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:20:20 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/21 16:27:27 by migmoren         ###   ########.fr       */
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
	if (!s)
		return (0);
	while (++j <= i)
	{
		if (s[j] == (char)c)
			return ((char *)(s + j));
	}
	return (0);
}
