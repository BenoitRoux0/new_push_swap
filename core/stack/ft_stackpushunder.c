/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpushunder.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:36:03 by beroux            #+#    #+#             */
/*   Updated: 2023/02/19 14:43:58 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

void	ft_stackaddunder(t_stack **stack, t_stack *to_add)
{
	t_stack	*tmp;

	if (!stack)
		return ;
	if (!(*stack))
	{
		*stack = to_add;
		return ;
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = to_add;
	to_add->next = NULL;
}
