/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makestack_easier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:33:57 by beroux            #+#    #+#             */
/*   Updated: 2023/02/20 17:54:49 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

static int64_t	ft_stack_min(t_stack *stack);
static void		ft_stack_positive(t_stack *stack);

void	ft_makestack_easier(t_stack *stack)
{
	ft_stack_positive(stack);
}

static void	ft_stack_positive(t_stack *stack)
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
