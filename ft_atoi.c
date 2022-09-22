/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:09:27 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/22 16:16:39 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		return (num);
	else
		return (num * -1);
}
