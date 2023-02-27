/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_positive.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:33:57 by beroux            #+#    #+#             */
/*   Updated: 2023/02/27 09:13:36 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

static int64_t	ft_stack_min(t_stack *stack);

void	ft_stack_positive(t_stack *stack)
{
	int64_t	min;

	min = ft_stack_min(stack);
	while (stack)
	{
		stack->content -= min;
		stack = stack->next;
	}
}

static int64_t	ft_stack_min(t_stack *stack)
{
	int64_t	min;

	if (!stack)
		return (0);
	min = stack->content;
	stack = stack->next;
	while (stack)
	{
		if (stack->content < min)
			min = stack->content;
		stack = stack->next;
	}
	return (min);
}
