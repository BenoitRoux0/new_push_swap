/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:07:11 by beroux            #+#    #+#             */
/*   Updated: 2022/11/07 16:17:43 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	val;
	size_t			i;
	unsigned char	*d;

	val = (unsigned char) c;
	i = 0;
	d = (unsigned char *) b;
	while (i < len)
	{
		d[i] = val;
		i++;
	}
	return (b);
}
