/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:13:22 by beroux            #+#    #+#             */
/*   Updated: 2022/11/27 18:20:15 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../prints/prints.h"
#include "../utils/utils.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

static int	to_skip(const char *format)
{
	int	res;

	res = 1;
	if (format[0] != '%')
		return (0);
	if (format[1] == '%')
		return (2);
	if (format[1] == 's')
		return (2);
	if (format[1] == 'c')
		return (2);
	if (format[1] == 'd' || format[1] == 'i')
		return (2);
	if (format[1] == 'x' || format[1] == 'X')
		return (2);
	if (format[1] == 'u')
		return (2);
	if (format[1] == 'p')
		return (2);
	while (format[res] && ft_isalnum(format[res]))
		res++;
	return (res);
}

static int	print_arg(const char *format, va_list args)
{
	int	len;

	len = 1;
	if (format[1] == '%')
		return (print_char('%'));
	if (format[1] == 's')
		return (print_str(va_arg(args, char *)));
	if (format[1] == 'c')
		return (print_char(va_arg(args, int)));
	if (format[1] == 'd' || format[1] == 'i')
		return (print_nbr(va_arg(args, int)));
	if (format[1] == 'u')
		return (print_uint(va_arg(args, unsigned int)));
	if (format[1] == 'x' || format[1] == 'X')
		return (print_hex(va_arg(args, unsigned int), format[1] == 'x'));
	if (format[1] == 'p')
		return (print_ptr(va_arg(args, void *)));
	while (format[len] && ft_isalnum(format[len]))
		len++;
	return (write(1, format + 1, len - 1));
}

int	ft_printf(const char *format, ...)
{
	int		res;
	va_list	args;
	size_t	i;

	if (write(1, "", 0) != 0)
		return (-1);
	va_start(args, format);
	i = 0;
	res = 0;
	while (*format)
	{
		while (format[i] && format[i] != '%')
			i++;
		res += write(1, format, i);
		format += i;
		if (*format == '%')
			res += print_arg(format, args);
		format += to_skip(format);
		i = 0;
	}
	va_end(args);
	return (res);
}
