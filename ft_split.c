/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:40:04 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/27 19:20:06 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static int	ft_numwords(char const *s, char c)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			j++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (j);
}

static char	*ft_word(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc (sizeof(char const) * ft_wordlen(s, c) + 1);
	while (i < ft_wordlen(s, c))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int	i;

	words = malloc(sizeof(char) * (ft_numwords(s, c) + 1));
	i = 0;
	while (s)
	{
		while (*s == c && s)
			s++;
		if (s)
			words[i++] = ft_word(s, c);
		while (*s != c && s)
			s++;
	}
	words[i] = 0;
	return (words);
}

int main()
{
	char **words;
	char s[] = "me cago en dios";
	char c = ' ';
	words = ft_split(s, c);
	printf("%s", words[0]);
	free(words);
}
