/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:44:02 by beroux            #+#    #+#             */
/*   Updated: 2023/02/15 13:10:26 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	to_find;

	i = 0;
	to_find = (char) c;
	while (s[i])
	{
		if (to_find == s[i])
			return ((char *)s + i);
		i++;
	}
	if (to_find == 0)
		return ((char *)s + i);
	return (0);
}
