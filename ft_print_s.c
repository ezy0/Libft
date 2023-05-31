/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:03:14 by migmoren          #+#    #+#             */
/*   Updated: 2023/03/08 16:48:44 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_s(char const *str)
{
	if (!str)
		return (write(1, "(null)", ft_strlen("(null)")));
	return (write (1, str, ft_strlen(str)));
}
