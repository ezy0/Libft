/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:35:26 by migmoren          #+#    #+#             */
/*   Updated: 2023/03/08 16:48:29 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}

static int	ft_error(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%')
		return (0);
	return (1);
}

static int	ft_format(char const *format, va_list arg)
{
	int	pr;

	pr = 0;
	if (*format == '%')
		pr += ft_putchar('%');
	else if (*format == 'c')
		pr += ft_putchar(va_arg(arg, int));
	else if (*format == 's')
		pr += ft_print_s(va_arg(arg, char const *));
	else if (*format == 'p')
		pr += ft_print_p(va_arg(arg, void *));
	else
		pr += ft_print_nbr(va_arg(arg, int), *format);
	return (pr);
}

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	int		pr;

	va_start (arg, str);
	pr = 0;
	while (*str)
	{
		if (*str == '%' && !ft_error(*(str + 1)))
			pr += ft_format(++str, arg);
		else
			pr += ft_putchar(*str);
		str++;
	}
	return (pr);
}
