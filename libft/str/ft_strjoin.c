/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:14:59 by beroux            #+#    #+#             */
/*   Updated: 2022/11/15 10:21:08 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!len_s1 && !len_s2)
		return (ft_strdup(""));
	if (len_s1 > 2147483647 - len_s2)
		return ((char *) NULL);
	res = (char *) malloc(len_s1 + len_s2 + 1);
	if (!res)
		return ((char *) NULL);
	ft_memmove(res, s1, len_s1 + 1);
	ft_memmove(res + len_s1, s2, len_s2 + 1);
	res[len_s1 + len_s2] = 0;
	return (res);
}
