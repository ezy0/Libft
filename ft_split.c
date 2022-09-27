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

//#include "libft.h"

//char	*ft_strdup(const char *src);
//int		ft_strlen(const char *s);
//int		ft_strlcpy(char *dst, const char *src, size_t dstsize);

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
	int	k;
	int	new;

	i = 0;
	j = 1;
	while (s[i] != '\0')
	{
		new = 0;
		if (s[i] == c)
		{
			k = i;
			while (s[k] == c && s[k] != '\0' && !new)
			{
				k++;
				if (s[k] != c && s[k] != '\0')
					new = 1;
			}
		}
		if (new)
			j++;
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

/*char	**ft_split(char const *s, char c)
{
	char	**words;
	char	*word;
	int		i;
	int		j;

	words = malloc(sizeof(char const) * ft_numwords(s, c));
	i = 0;
	j = 0;
	while (s)
	{
		word = ft_strdup(ft_word(s, c));
		while (word[j])
		{
			words[i][j] = word[j];
			j++;
		}
		free (word);
		i++;
		while (j > 0)
		{
			s++;
			j--;
		}
	}
	return (words);
}*/

int main()
{
	char s[] = " 1234 1234      ";
	char c = ' ';
	char *word =ft_word(s, c);
	printf ("%d", ft_numwords(s, c));
	free(word);
}