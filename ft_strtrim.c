/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:21:01 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/22 18:31:25 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(const char *s);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;
	int		bol;

	i = -1;
	bol = 1;
	str = malloc(ft_strlen(s1));
	while (s1[++i] && bol)
	{
		j = -1;
		while (set[++j])
			bol = s1[i] == set[j]


	}
}
