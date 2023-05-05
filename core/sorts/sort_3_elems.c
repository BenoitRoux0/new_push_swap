/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_elems.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 06:25:41 by beroux            #+#    #+#             */
/*   Updated: 2023/05/05 14:08:17 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

static int	sort_2_elems(void);
static int	top_is_lower(t_stack **stack);

int	sort_3_elems(t_stack **stack)
{
	if (!stack || !(*stack) || ft_stacksize(*stack) == 1 || \
		ft_stackis_sorted(*stack))
		return (0);
	if (ft_stacksize(*stack) == 2)
		return (sort_2_elems());
	ft_stack_positive(*stack);
	if ((*stack)->content == 0)
	{
		if (write(1, "rra\nsa\n", 7) != 7)
			return (0);
	}
	else if ((*stack)->next->content == 0)
	{
		if (!top_is_lower(stack))
			return (0);
	}
	else
	{
		if ((*stack)->content > (*stack)->next->content)
			if (write(1, "sa\n", 3) != 3)
				return (0);
		if (write(1, "rra\n", 4) != 4)
			return (0);
	}
	return (1);
}

static int	sort_2_elems(void)
{
	if (write(1, "sa\n", 3) != 3)
		return (0);
	return (1);
}

static int	top_is_lower(t_stack **stack)
{
	if ((*stack)->content < (*stack)->next->next->content)
	{
		if (write(1, "sa\n", 3) != 3)
			return (0);
	}
	else
		if (write(1, "ra\n", 3) != 3)
			return (0);
	return (1);
}
