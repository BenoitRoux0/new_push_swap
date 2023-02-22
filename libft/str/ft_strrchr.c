/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:57:19 by beroux            #+#    #+#             */
/*   Updated: 2022/11/09 10:22:50 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t			len;
	size_t			i;
	unsigned char	to_find;

	to_find = (unsigned char) c;
	len = ft_strlen(s);
	i = len;
	while (i > 0)
	{
		if (s[i] == to_find)
			return ((char *)s + i);
		i--;
	}
	if (s[i] == to_find)
		return ((char *)s + i);
	i--;
	return (0);
}
