/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:12:46 by beroux            #+#    #+#             */
/*   Updated: 2023/03/01 13:42:56 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "prints.h"

int	print_ptr(int fd, void *ptr)
{
	int	res;

	res = write(fd, "0x", 2);
	res += print_hex(fd, (uintptr_t) ptr, 1);
	return (res);
}
