/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackrotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:31:24 by beroux            #+#    #+#             */
/*   Updated: 2023/05/05 13:51:41 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

int	ft_stackrotate(t_stack **stack, char name)
{
	t_stack	*tmp;

	tmp = ft_stackpop(stack);
	ft_stackaddunder(stack, tmp);
	if (!name)
		return (0);
	return (ft_printf("r%c\n", name) == 3);
}
