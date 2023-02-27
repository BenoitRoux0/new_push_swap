/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_little_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:06:48 by beroux            #+#    #+#             */
/*   Updated: 2023/02/27 09:08:40 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

static size_t	ft_find_stackmin(t_stack *stack);
static t_stack	*extract_min(t_stack **stack);

void	sort_little_stack(t_stack **stack, t_stack **stack_b)
{
	t_stack	*tmp;

	if (!stack || !(*stack) || ft_stackis_sorted(*stack))
		return ;
	while (ft_stacksize(*stack) > 3)
	{
		tmp = extract_min(stack);
		ft_stackpushto(&tmp, stack_b, 'b');
	}
	sort_3_elems(stack);
	if (ft_stackis_sorted(*stack_b))
		write(1, "sb\n", 3);
	while (ft_stacksize(*stack_b))
		ft_stackpushto(stack_b, stack, 'a');
}

static t_stack	*extract_min(t_stack **stack)
{
	size_t	pos;

	pos = ft_find_stackmin(*stack);
	while (ft_find_stackmin(*stack))
	{
		if (pos >= ft_stacksize(*stack) / 2)
			ft_stackrev_rotate(stack, 'a');
		else
			ft_stackrotate(stack, 'a');
	}
	return (ft_stackpop(stack));
}

static size_t	ft_find_stackmin(t_stack *stack)
{
	int64_t	min;
	t_stack	*tmp;
	size_t	pos;

	min = INT64_MAX;
	tmp = stack;
	while (stack)
	{
		if (stack->content < min)
			min = stack->content;
		stack = stack->next;
	}
	pos = 0;
	while (tmp && tmp->content != min)
	{
		pos++;
		tmp = tmp->next;
	}
	return (pos);
}
