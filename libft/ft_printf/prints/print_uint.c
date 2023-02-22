/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:58:13 by beroux            #+#    #+#             */
/*   Updated: 2022/11/21 11:30:04 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "prints.h"
#include <unistd.h>

int	print_uint(unsigned int n)
{
	int		res;
	char	to_print;

	res = 0;
	if (n > 9)
		res += print_nbr(n / 10);
	to_print = n % 10 + 48;
	res += write(1, &to_print, 1);
	return (res);
}
