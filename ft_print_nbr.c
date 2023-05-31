/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:20:18 by migmoren          #+#    #+#             */
/*   Updated: 2023/03/08 16:48:37 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_base(size_t num, char *base)
{
	size_t	len;

	len = 1;
	if (num >= (size_t)ft_strlen(base))
	{
		len += ft_base(num / ft_strlen(base), base);
		ft_putchar(base[num % ft_strlen(base)]);
	}
	else
		ft_putchar(base[num]);
	return (len);
}

int	ft_print_nbr(int num, char format)
{
	char	*hex_min;
	char	*hex_upp;
	char	*dec;

	hex_min = "0123456789abcdef";
	hex_upp = "0123456789ABCDEF";
	dec = "0123456789";
	if (format == 'd' || format == 'i')
	{
		if (num == -2147483648)
			return (write(1, "-2147483648", 11));
		else if (num < 0)
			return (ft_putchar('-') + ft_base(num * -1, dec));
		else
			return (ft_base(num, dec));
	}
	if (format == 'u')
		return (ft_base((unsigned int)num, dec));
	if (format == 'x')
		return (ft_base((unsigned int)num, hex_min));
	if (format == 'X')
		return (ft_base((unsigned int)num, hex_upp));
	return (1);
}
