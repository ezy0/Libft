/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:21:01 by migmoren          #+#    #+#             */
/*   Updated: 2022/10/17 17:52:51 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	char		*str;
	char const	*aux;

	if (!s1 || !set)
		return (0);
	i = ft_strlen(s1);
	aux = s1;
	while (*aux && ft_strchr(set, *aux) != 0)
	{
		aux++;
		i--;
	}
	while (i >= 0 && *aux && ft_strchr(set, aux[i]) != 0)
		i--;
	str = ft_substr(aux, 0, ++i);
	if (!str)
		return (0);
	return (str);
}
