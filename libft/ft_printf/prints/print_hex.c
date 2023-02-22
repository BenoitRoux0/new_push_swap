/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:12:32 by beroux            #+#    #+#             */
/*   Updated: 2022/11/22 10:44:49 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "prints.h"
#include <unistd.h>

int	print_hex(uintptr_t h, int lower)
{
	int		res;
	char	to_print;

	res = 0;
	if (h > 15)
		res += print_hex(h / 16, lower);
	to_print = h % 16;
	if (to_print <= 9)
		to_print += 48;
	else
		to_print += 55 + 32 * lower;
	res += write(1, &to_print, 1);
	return (res);
}
