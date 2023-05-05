/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:12:51 by beroux            #+#    #+#             */
/*   Updated: 2023/03/01 13:43:50 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "prints.h"

int	print_str(int fd, const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (write(fd, "(null)", 6));
	while (s[len])
		len++;
	return (write(fd, s, len));
}
