/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:47:42 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/30 20:00:20 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_abs(long n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static long	str_size(long n)
{
	long	i;
	long	neg;

	i = 0;
	neg = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		neg = 1;
		n = ft_abs(n);
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	if (neg)
		return (i + 1);
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	long		aux;
	long		i;

	aux = ft_abs((long)n);
	i = str_size((long)n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i--] = '\0';
	while (i >= 0)
	{
		if (n < 0 && i == 0)
			str[i--] = '-';
		else
		{
			str[i--] = (aux % 10) + '0';
			aux = aux / 10;
		}
	}
	return (str);
}
