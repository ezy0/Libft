/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:18:00 by migmoren          #+#    #+#             */
/*   Updated: 2023/03/08 16:48:41 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pointer(size_t num)
{
	size_t	len;
	char	*base;

	len = 1;
	base = "0123456789abcdef";
	if (num >= (size_t)ft_strlen(base))
	{
		len += ft_pointer(num / ft_strlen(base));
		ft_putchar(base[num % ft_strlen(base)]);
	}
	else
		ft_putchar(base[num]);
	return (len);
}

int	ft_print_p(void *ptr)
{
	size_t	ptr_num;

	ptr_num = (size_t)ptr;
	return (write(1, "0x", 2) + ft_pointer(ptr_num));
}
