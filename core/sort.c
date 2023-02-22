/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:22:59 by beroux            #+#    #+#             */
/*   Updated: 2023/02/20 17:55:48 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

void	sort(t_stack **stack)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (ft_stacksize(*stack) == 3)
		sort_3_elems(stack);
	else if (ft_stacksize(*stack) == 5)
		sort_5_elems(stack, &stack_b);
	else
		radix(stack, &stack_b);
}
