/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makestack_easier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:33:57 by beroux            #+#    #+#             */
/*   Updated: 2023/02/16 14:02:01 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

static int64_t	ft_stack_min(t_stack *stack);
static void		ft_stack_set_minl(t_stack *stack, int64_t limit);
static void		ft_stack_positive(t_stack *stack);

void	ft_makestack_easier(t_stack *stack)
{
	int64_t i;
	int64_t	size;

	ft_stack_positive(stack);
	i = 0;
	size = (int64_t) ft_stacksize(stack);
	while (i < size)
	{
		ft_stack_set_minl(stack, i);
		i++;
	}
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

static void	ft_stack_set_minl(t_stack *stack, int64_t limit)
{
	t_stack	*min_ptr;
	int64_t	min;

	min = INT64_MAX;
	min_ptr = NULL;
	while (stack)
	{
		if (stack->content < min && min >= limit)
		{
			min = stack->content;
			min_ptr = stack;
		}
		stack = stack->next;
	}
	min_ptr->content = limit;
}
