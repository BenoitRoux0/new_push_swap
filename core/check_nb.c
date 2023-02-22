/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 02:28:19 by beroux            #+#    #+#             */
/*   Updated: 2023/02/20 17:56:03 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

int	check_nb(char *number)
{
	size_t	i;

	i = 0;
	while (number[i] && number[i] == ' ')
		i++;
	if (!number[i])
		return (0);
	i += (number[i] == '+' || number[i] == '-');
	if (!number[i])
		return (0);
	while (number[i] && number[i] >= '0' && number[i] <= '9')
		i++;
	return (!number[i]);
}
