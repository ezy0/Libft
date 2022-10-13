/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:09:27 by migmoren          #+#    #+#             */
/*   Updated: 2022/10/12 20:09:15 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	max_atoi (long num, int neg)
{
	if (num > 9223372036854775807 && !neg)
		return(0);
	else if (neg)
		return (-1);
	return (num)
}

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	num;

	i = 0;
	neg = 0;
	num = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == ' ') && str[i] != '\0')
		i++;
	if (str[i] == '-' && str[i] != '\0')
	{
		neg++;
		i++;
	}
	else if (str[i] == '+' && str[i] != '\0')
		i++;
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (neg == 0)
		return (max_atoi(num, neg);
	else
		return (max_atoi(num, neg) * -1);
}
