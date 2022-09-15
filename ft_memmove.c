
void	*ft_memmove(void *dest, const void *src, int n)
{
	unsigned char	*aux_dest;
	unsigned char	*aux_src;
	unsigned char	*aux;
	int				i;

	i = -1;
	aux_dest = dest;
	aux_src = (unsigned char*)src;
	aux = (unsigned char *)src;
	while (aux_src[++i] != '\0')
		aux++;
	i = -1;
	while (++i < n)
		aux[i] = aux_src[i];
	i = -1;
	while (++i < n)
	{
		aux_dest[i] = aux[i];
		aux[i] = '\0';
	}
	return (dest);
}
