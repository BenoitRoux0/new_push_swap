/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:22:59 by beroux            #+#    #+#             */
/*   Updated: 2023/05/05 15:14:28 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

int	sort(t_stack **stack)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (ft_stacksize(*stack) <= 35)
	{
		if (!sort_little_stack(stack, &stack_b))
			return (0);
	}
	else
		if (!radix(stack, &stack_b))
			return (0);
	return (1);
}
