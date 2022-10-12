/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:21:01 by migmoren          #+#    #+#             */
/*   Updated: 2022/10/05 19:03:49 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_clean_front(char const *s1, char const *set)
{
	int	i;
	int	bol;
	int	j;

	i = 0;
	bol = 1;
	while (s1[i] && bol)
	{
		bol = 0;
		j = -1;
		while (set[++j] && !bol)
			bol = s1[i] == set[j];
		if (bol)
			i++;
	}
	return (i);
}

static int	ft_clean_back(char const *s1, char const *set)
{
	int	i;
	int	bol;
	int	j;

	i = ft_strlen(s1) - 1;
	bol = 1;
	while (s1[i] && bol)
	{
		bol = 0;
		j = -1;
		while (set[++j] != '\0' && !bol)
			bol = s1[i] == set[j];
		if (bol)
			i--;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	size_t		k;
	char		*str;

	i = ft_clean_front(s1, set);
	j = ft_clean_back(s1, set);
	k = 0;
	if (j < i)
		j = i;
	str = malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (0);
	while (s1[i] != '\0' && i < j)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}
