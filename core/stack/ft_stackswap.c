/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackswap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:52:26 by beroux            #+#    #+#             */
/*   Updated: 2023/05/05 13:50:58 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

int	ft_stackswap(t_stack **stack, char name)
{
	t_stack	*tmp;

	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
	if (!name)
		return (0);
	return (ft_printf("s%c\n", name) == 3);
}
