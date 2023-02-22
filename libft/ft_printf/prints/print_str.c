/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:12:51 by beroux            #+#    #+#             */
/*   Updated: 2022/11/21 11:40:26 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "prints.h"
#include <unistd.h>

int	print_str(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[len])
		len++;
	return (write(1, s, len));
}
