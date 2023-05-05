/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:58:13 by beroux            #+#    #+#             */
/*   Updated: 2023/03/01 13:43:03 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "prints.h"

int	print_uint(int fd, unsigned int n)
{
	int		res;
	char	to_print;

	res = 0;
	if (n > 9)
		res += print_nbr(fd, n / 10);
	to_print = n % 10 + 48;
	res += write(fd, &to_print, 1);
	return (res);
}
