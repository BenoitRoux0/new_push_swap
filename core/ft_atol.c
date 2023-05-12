/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:56:07 by beroux            #+#    #+#             */
/*   Updated: 2023/05/12 10:29:05 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	goto_nbr(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && ft_strchr("\t\n\r\v\f ", str[i]))
		i++;
	return (i);
}

static int	add_overflow(int64_t *dst, int64_t a, int64_t b)
{
	*dst = a + b;
	if (a > 0 && b > 0 && *dst < 0)
		return (1);
	if (a < 0 && b < 0 && *dst > 0)
		return (1);
	return (0);
}

static int	mul_overflow(int64_t *dst, int64_t a, int64_t b)
{
	*dst = a * b;
	if (!a)
		return ((*dst) / b != a);
	return ((*dst) / a != b);
}

int64_t	ft_atol(const char *str)
{
	size_t	i;
	int64_t	res;
	int		sign;

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
		if (add_overflow(&res, res, (int64_t) str[i] - 48))
			return (-1 * (sign == 1));
		i++;
	}
	return (sign * res);
}
