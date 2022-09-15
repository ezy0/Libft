
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	int			j;

	i = ft_strlen(s);
	j = 0;
	while (++j <= i)
		s++;
	while (*s != c && --j >= 0)
		s--;
	if (*s == c)
		return ((char *)s);
	return (0);
}
