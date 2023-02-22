/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:32:15 by beroux            #+#    #+#             */
/*   Updated: 2022/11/15 19:55:50 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_nbrlen(int n)
{
	int	res;

	if (n == -2147483648)
		return (11);
	res = 0;
	if (n < 0)
	{
		res += 1;
		n *= -1;
	}
	if (n <= 9)
		return (res + 1);
	res += (1 + ft_nbrlen(n / 10));
	return (res);
}

static int	ft_mincase(int n, char *dst, int *i)
{
	dst[10] = 56;
	*i = 1;
	return (n / 10);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		i;

	len = ft_nbrlen(n);
	res = malloc(len + 1);
	i = 0;
	if (!res)
		return (NULL);
	if (n == -2147483648)
		n = ft_mincase(n, res, &i);
	res[0] = '-' * (n < 0);
	if (n < 0)
		n *= -1;
	if (n == 0)
		res[0] = '0';
	while (n > 0)
	{
		res[len - i - 1] = n % 10 + 48;
		n /= 10;
		i++;
	}
	res[len] = 0;
	return (res);
}
