/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:37:05 by beroux            #+#    #+#             */
/*   Updated: 2022/11/08 12:54:44 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		to_find;
	size_t				i;

	i = 0;
	to_find = (unsigned char) c;
	str = (const unsigned char *) s;
	while (i < n)
	{
		if (str[i] == to_find)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
