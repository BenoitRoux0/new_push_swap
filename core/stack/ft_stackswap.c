/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackswap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:52:26 by beroux            #+#    #+#             */
/*   Updated: 2023/02/16 13:35:12 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

void	ft_stackswap(t_stack **stack, char name)
{
	t_stack	*tmp;

	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
	write(1, "s", 1);
	write(1, &name, 1);
	write(1, "\n", 1);
}
