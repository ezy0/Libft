/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:09:27 by migmoren          #+#    #+#             */
/*   Updated: 2022/10/17 17:36:25 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long	max_atoi(unsigned long num, int neg)
{
	unsigned long	aux;

	aux = 9223372036854775807;
	if (num > aux + 1 && neg == -1)
		return (0);
	else if (num > aux && neg == 1)
		return (-1);
	return (num);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				neg;
	unsigned long	num;

	i = 0;
	neg = 1;
	num = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == ' ') && str[i] != '\0')
		i++;
	if (str[i] == '-' && str[i] != '\0')
	{
		neg = -1;
		i++;
	}
	else if (str[i] == '+' && str[i] != '\0')
		i++;
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (max_atoi(num, neg) * neg);
}
