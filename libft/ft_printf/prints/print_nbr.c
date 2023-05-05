/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:12:40 by beroux            #+#    #+#             */
/*   Updated: 2023/03/01 13:42:51 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "prints.h"

int	print_nbr(int fd, int n)
{
	int		res;
	char	to_print;

	res = 0;
	if (n == -2147483648)
		return (print_str(fd, "-2147483648"));
	if (n < 0)
	{
		write(fd, "-", 1);
		res++;
		n *= -1;
	}
	if (n > 9)
		res += print_nbr(fd, n / 10);
	to_print = n % 10 + 48;
	res += write(fd, &to_print, 1);
	return (res);
}
