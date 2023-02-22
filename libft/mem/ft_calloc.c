/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:34:50 by beroux            #+#    #+#             */
/*   Updated: 2022/11/15 20:39:33 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	non_null_safemult(size_t a, size_t b)
{
	size_t	res;

	res = a * b;
	return ((res / b == a) * res);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	size_tot;
	void	*res;

	if (!count || !size)
		return (malloc(0));
	size_tot = non_null_safemult(count, size);
	if (!size_tot)
		return (NULL);
	res = malloc(size_tot);
	if (!res)
		return (NULL);
	ft_bzero(res, size_tot);
	return (res);
}
