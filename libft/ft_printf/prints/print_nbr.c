/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:12:40 by beroux            #+#    #+#             */
/*   Updated: 2022/11/21 10:53:59 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "prints.h"
#include <unistd.h>

int	print_nbr(int n)
{
	int		res;
	char	to_print;

	res = 0;
	if (n == -2147483648)
		return (print_str("-2147483648"));
	if (n < 0)
	{
		write(1, "-", 1);
		res++;
		n *= -1;
	}
	if (n > 9)
		res += print_nbr(n / 10);
	to_print = n % 10 + 48;
	res += write(1, &to_print, 1);
	return (res);
}
