/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:47:40 by beroux            #+#    #+#             */
/*   Updated: 2022/11/15 10:49:38 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	int		diff;

	i = 0;
	needle_len = ft_strlen(needle);
	if (!haystack && !len)
		return ((char *) haystack);
	if (needle_len && !(*haystack))
		return (NULL);
	diff = ft_strncmp(needle, haystack + i, needle_len);
	if (needle_len > len)
		return (NULL);
	if (!needle_len)
		return ((char *) haystack);
	while (i < len - needle_len + 1)
	{
		if (i > 0)
			diff = ft_strncmp(needle, haystack + i, needle_len);
		if (!diff)
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}
