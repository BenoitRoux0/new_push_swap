/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:12:46 by beroux            #+#    #+#             */
/*   Updated: 2022/11/20 18:14:03 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "prints.h"
#include <unistd.h>
#include <stdint.h>

int	print_ptr(void *ptr)
{
	int	res;

	res = write(1, "0x", 2);
	res += print_hex((uintptr_t) ptr, 1);
	return (res);
}
