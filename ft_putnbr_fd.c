/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:13:33 by migmoren          #+#    #+#             */
/*   Updated: 2022/10/02 19:22:12 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb == -2147483648)
	{
		write (fd, "-2", 2);
		ft_putnbr_fd(147483648, fd);
	}
	else if (nb < 0)
	{
		write (fd, "-", 1);
		nb = nb * -1;
		ft_putnbr_fd(nb, fd);
	}
	else if (nb <= 9)
	{
		ft_putchar (nb + '0', fd);
		return ;
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
		return ;
	}
}
