
void	*ft_memcpy(void *dest, const void *src, int n)
{
	unsigned char	*aux_dest;
	unsigned char	*aux_src;
	int				i;

	i = 0;
	aux_dest = dest;
	aux_src = (unsigned char*)src;
	while (i < n)
	{
		aux_dest[i] = aux_src[i];
		i++;
	}
	return (dest);
}
