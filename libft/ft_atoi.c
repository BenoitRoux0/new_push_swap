/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:02:42 by beroux            #+#    #+#             */
/*   Updated: 2022/11/17 10:52:20 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	goto_nbr(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && ft_strchr("\t\n\r\v\f ", str[i]))
		i++;
	return (i);
}

static int	add_overflow(long long int *dst, long long int a, long long int b)
{
	*dst = a + b;
	if (a > 0 && b > 0 && *dst < 0)
		return (1);
	if (a < 0 && b < 0 && *dst > 0)
		return (1);
	return (0);
}

static int	mul_overflow(long long int *dst, long long int a, long long int b)
{
	*dst = a * b;
	if (!a)
		return ((*dst) / b != a);
	return ((*dst) / a != b);
}

int	ft_atoi(const char *str)
{
	size_t			i;
	long long int	res;
	int				sign;

	i = goto_nbr(str);
	sign = 1;
	if (str[i] == '-')
		sign = -1;
	i += (str[i] == '-' || str[i] == '+');
	res = 0;
	while (ft_isdigit(str[i]))
	{
		if (mul_overflow(&res, res, 10))
			return (-1 * (sign == 1));
		if (add_overflow(&res, res, (long long int) str[i] - 48))
			return (-1 * (sign == 1));
		i++;
	}
	return (sign * (int) res);
}
