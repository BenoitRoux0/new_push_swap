/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 02:28:19 by beroux            #+#    #+#             */
/*   Updated: 2023/05/12 10:29:05 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
