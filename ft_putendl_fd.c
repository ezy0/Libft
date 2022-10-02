/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:10:17 by migmoren          #+#    #+#             */
/*   Updated: 2022/10/02 19:13:15 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(const char *s);

void	ft_putendl_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}
